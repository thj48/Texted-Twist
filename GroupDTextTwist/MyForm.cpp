#include "MyForm.h"

namespace view {

	/// <summary>
	/// Constructor for the MyForm Class, this form handles came flow and user input / output.
	/// </summary>
	MyForm::MyForm(void)
	{
		InitializeComponent();
		this->game = new Game();
		this->gameTime=oneMinute;
		this->saveScoreButton->Enabled = false;
		this->reuseLetters = false;
	}

	Void MyForm::letterButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->lastSelected = ((Button^)sender);
		this->inputTextBox->Text += this->lastSelected->Text;
		this->undoButton->Enabled= true;
				 
		if (!this->reuseLetters)
		{
			this->lastSelected->Enabled = false;
		}
	}

	Void MyForm::undoButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int length = this-> inputTextBox->Text->Length;
		String^ text = this->inputTextBox->Text;
		string input = this->marshallSystemToStandardString(text);
		this->inputTextBox->Text = this->marshallStandardToSystemString(input.erase(length - 1));
		this->lastSelected->Enabled = true;
		this->undoButton->Enabled = false;
	}

	Void MyForm::clearButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->inputTextBox->Text = "";
		this->resetLetterButtons();
	}

	Void MyForm::checkWordButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^ text = this->inputTextBox->Text;

		if (text->Length < this->minWordLength)
		{
			this->wordTextboxLabel->Text = this->resourceManager->GetString("WORD_LENGTH_ERROR");
			return;
		}

		string input = this->marshallSystemToStandardString(text);
		bool correct = this->game->checkInputWord(input);
		this->handleResult(correct, input);
		this->inputTextBox->Text = "";
		this->resetLetterButtons();
	}

	Void MyForm::exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		System::Environment::Exit(0);	 
	}

	Void MyForm::highScoreMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->wordsFoundLabel->Text = this->resourceManager->GetString("PLAYER_NAME_LABEL");
		this->wordsNotFoundLabel->Text = this->resourceManager->GetString("PLAYER_SCORE_LABEL");
		this->wordsFoundTextBox->Text = this->marshallStandardToSystemString(this->game->getHighScoreNames());
		this->wordsMissedTextBox->Text = this->marshallStandardToSystemString(this->game->getHighScores());
	}

	Void MyForm::oneMinuteMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->gameTime=oneMinute;
	}

	Void MyForm::twoMinuteMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->gameTime=twoMinutes;
	}

	Void MyForm::threeMinuteMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		 this->gameTime=threeMinutes;
	}

	Void MyForm::disableMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		 this->reuseLetters = false;
	}

	Void MyForm::enableMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->reuseLetters =true;
	}

	Void MyForm::playButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->count = 0;
		this->game->start(this->reuseLetters);
		this->timeRemaining = this->gameTime;
		this->setUpForm();
		this->setUpTextBoxes();
		this->timer1->Start();
	}

	Void MyForm::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->timeRemaining == 0)
		{
			this->checkWordButton->Enabled = false;
			this->timer1->Stop();
			MessageBox::Show(this->resourceManager->GetString("YOU_FOUND_BEGIN") + count + this->resourceManager->GetString("YOU_FOUND_END"));
			this->enableSettings();
			this->saveScoreButton->Enabled = true;
			
			if(!this->reuseLetters){
				string remaining = this->game->getRemainingWords();
				this->wordsMissedTextBox->Text = this->marshallStandardToSystemString(remaining);
			}
		}
		else
		{
			this->timeRemaining--;
			this->timerTextBox->Text = "" + this->timeRemaining;
		}
	}

	string MyForm::marshallSystemToStandardString(String^ system)
	{
		msclr::interop::marshal_context context;
		return context.marshal_as<std::string>(system);
	}

	String^ MyForm::marshallStandardToSystemString(string standard)
	{
		return gcnew String(standard.c_str());
	}

	void MyForm::handleResult(bool correct, string input)
	{
		if (correct)
		{
			this->count++;
			this->wordTextboxLabel->Text = this->resourceManager->GetString("CORRECT");
			this->wordsFoundTextBox->Text += this->marshallStandardToSystemString(input + "\n");

			if(!this->reuseLetters){
				this->possibleWordsTextBox->Text = "" + (this->game->getAmountofPossibleWords() - count);
				this->checkIfAllWordsFound();
			}
		}
		else
		{
			this->wordTextboxLabel->Text = this->resourceManager->GetString("INCORRECT");
		}

		this->scoreTextBox->Text = ""+this->game->getScore();
	}

	void MyForm::checkIfAllWordsFound()
	{
		if (count == this->game->getAmountofPossibleWords())
		{
			MessageBox::Show(this->resourceManager->GetString("WIN_MESSAGE"));
			this->timer1->Stop();
			this->enableSettings();
		}
	}

	void MyForm::setUpForm()
	{
		this->setUpTextBoxes();
		this->disableSettings();
		this->setUpButtons();
	}

	void MyForm::setUpButtons()
	{
		this->saveScoreButton->Enabled = false;
		this->undoButton->Enabled = false;
		this->checkWordButton->Enabled = true;
		this->resetLetterButtons();
	
		this->letterButton1->Text = this->marshallStandardToSystemString(this->game->getLetters().substr(0,1));
		this->letterButton2->Text = this->marshallStandardToSystemString(this->game->getLetters().substr(1,1));
		this->letterButton3->Text = this->marshallStandardToSystemString(this->game->getLetters().substr(2,1));
		this->letterButton4->Text = this->marshallStandardToSystemString(this->game->getLetters().substr(3,1));
		this->letterButton5->Text = this->marshallStandardToSystemString(this->game->getLetters().substr(4,1));
		this->letterButton6->Text = this->marshallStandardToSystemString(this->game->getLetters().substr(5,1));
		this->letterButton7->Text = this->marshallStandardToSystemString(this->game->getLetters().substr(6,1));
	}

	void MyForm::resetLetterButtons()
	{
		this->letterButton1->Enabled = true;
		this->letterButton2->Enabled = true;
		this->letterButton3->Enabled = true;
		this->letterButton4->Enabled = true;
		this->letterButton5->Enabled = true;
		this->letterButton6->Enabled = true;
		this->letterButton7->Enabled = true;
	}

	void MyForm::enableSettings()
	{
		this->disableMenuItem->Enabled=true;
		this->enableToolMenuItem->Enabled=true;

		this->oneMinuteMenuItem->Enabled = true;
		this->twoMinuteMenuItem->Enabled = true;
		this->threeMinuteMenuItem->Enabled = true;

		this->playButton->Enabled =true;
	}

	void MyForm::disableSettings()
	{
		this->disableMenuItem->Enabled=false;
		this->enableToolMenuItem->Enabled=false;

		this->oneMinuteMenuItem->Enabled = false;
		this->twoMinuteMenuItem->Enabled = false;
		this->threeMinuteMenuItem->Enabled = false;

		this->playButton->Enabled =false;
	}

	void MyForm::setUpTextBoxes()
	{
		this->wordTextboxLabel->ResetText();
		this->inputTextBox->Text = "";
		this->wordsFoundTextBox->Text = "";
		this->timerTextBox->Text = "" + this->timeRemaining;
		this->scoreTextBox->Text = "0";
		this->possibleWordsTextBox->Text = "" + this->game->getAmountofPossibleWords();
		this->wordsMissedTextBox->Text = "";
		this->wordsFoundLabel->Text = this->resourceManager->GetString("WORDS_FOUND");
		this->wordsNotFoundLabel->Text = this->resourceManager->GetString("WORDS_NOT_FOUND");

		if(this->reuseLetters){
			this->possibleWordsTextBox->Text = "-";
		}
	}

	System::Void MyForm::saveScoreButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->game->getScoreController()->saveScore(this->marshallSystemToStandardString(this->playerNameTextBox->Text),this->gameTime, this->game->getScore());
		this->game->getScoreController()->readHighScores();
		this->saveScoreButton->Enabled = false;
	}

	/// <summary>
	/// Clean up any resources being used.
	/// Called implicitly.
	/// </summary>
	MyForm::~MyForm(void)
	{
		delete this->game;
		if (this->components)
		{
			delete this->components;
		}
	}

}

