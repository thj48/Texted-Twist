#include "MyForm.h"

namespace view {

	void MyForm::InitializeComponent(void)
	{
		this->resourceManager = gcnew Resources::ResourceManager(L"GroupDTextTwist.StringTable", this->GetType()->Assembly);
		this->components = (gcnew System::ComponentModel::Container());
		this->playButton = (gcnew System::Windows::Forms::Button());
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->timerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->oneMinuteMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->twoMinuteMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->threeMinuteMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->reuseLettersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->disableMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->enableToolMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->highScoreMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->clearButton = (gcnew System::Windows::Forms::Button());
		this->undoButton = (gcnew System::Windows::Forms::Button());
		this->letterButton3 = (gcnew System::Windows::Forms::Button());
		this->letterButton2 = (gcnew System::Windows::Forms::Button());
		this->letterButton4 = (gcnew System::Windows::Forms::Button());
		this->letterButton5 = (gcnew System::Windows::Forms::Button());
		this->letterButton6 = (gcnew System::Windows::Forms::Button());
		this->letterButton1 = (gcnew System::Windows::Forms::Button());
		this->letterButton7 = (gcnew System::Windows::Forms::Button());
		this->possibleWordsTextBox = (gcnew System::Windows::Forms::RichTextBox());
		this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
		this->scoreTextBox = (gcnew System::Windows::Forms::RichTextBox());
		this->scoreLabel = (gcnew System::Windows::Forms::Label());
		this->timerLabel = (gcnew System::Windows::Forms::Label());
		this->possibleWordsLabel = (gcnew System::Windows::Forms::Label());
		this->timerTextBox = (gcnew System::Windows::Forms::RichTextBox());
		this->inputTextBox = (gcnew System::Windows::Forms::RichTextBox());
		this->wordTextboxLabel = (gcnew System::Windows::Forms::Label());
		this->checkWordButton = (gcnew System::Windows::Forms::Button());
		this->wordsMissedTextBox = (gcnew System::Windows::Forms::RichTextBox());
		this->wordsFoundTextBox = (gcnew System::Windows::Forms::RichTextBox());
		this->wordsNotFoundLabel = (gcnew System::Windows::Forms::Label());
		this->wordsFoundLabel = (gcnew System::Windows::Forms::Label());
		this->welcomeLabel = (gcnew System::Windows::Forms::Label());
		this->playerNameTextBox = (gcnew System::Windows::Forms::TextBox());
		this->saveScoreButton = (gcnew System::Windows::Forms::Button());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// playButton
		// 
		this->playButton->Location = System::Drawing::Point(322, 222);
		this->playButton->Name = L"playButton";
		this->playButton->Size = System::Drawing::Size(118, 23);
		this->playButton->TabIndex = 0;
		this->playButton->Text = this->resourceManager->GetString(L"PLAY_BUTTON");
		this->playButton->UseVisualStyleBackColor = true;
		this->playButton->Click += gcnew System::EventHandler(this, &MyForm::playButton_Click);
    	// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem1, 
			this->optionsToolStripMenuItem, this->viewToolStripMenuItem});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(457, 24);
		this->menuStrip1->TabIndex = 1;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// toolStripMenuItem1
		// 
		this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
		this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
		this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
		this->toolStripMenuItem1->Text = this->resourceManager->GetString("FILE");
		// 
		// exitToolStripMenuItem
		// 
		this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
		this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
		this->exitToolStripMenuItem->Text = this->resourceManager->GetString("EXIT");
		this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
		// 
		// optionsToolStripMenuItem
		// 
		this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->timerToolStripMenuItem, 
			this->reuseLettersToolStripMenuItem});
		this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
		this->optionsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
		this->optionsToolStripMenuItem->Text = this->resourceManager->GetString("OPTIONS");
		// 
		// timerToolStripMenuItem
		// 
		this->timerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->oneMinuteMenuItem, 
			this->twoMinuteMenuItem, this->threeMinuteMenuItem});
		this->timerToolStripMenuItem->Name = L"timerToolStripMenuItem";
		this->timerToolStripMenuItem->Size = System::Drawing::Size(143, 22);
		this->timerToolStripMenuItem->Text = this->resourceManager->GetString("TIMER");
		// 
		// oneMinuteMenuItem
		// 
		this->oneMinuteMenuItem->Name = L"oneMinuteMenuItem";
		this->oneMinuteMenuItem->Size = System::Drawing::Size(126, 22);
		this->oneMinuteMenuItem->Text = this->resourceManager->GetString("TIMER_OPTION_1");
		this->oneMinuteMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oneMinuteMenuItem_Click);
		// 
		// twoMinuteMenuItem
		// 
		this->twoMinuteMenuItem->Name = L"twoMinuteMenuItem";
		this->twoMinuteMenuItem->Size = System::Drawing::Size(126, 22);
		this->twoMinuteMenuItem->Text = this->resourceManager->GetString("TIMER_OPTION_2");
		this->twoMinuteMenuItem->Click += gcnew System::EventHandler(this, &MyForm::twoMinuteMenuItem_Click);
		// 
		// threeMinuteMenuItem
		// 
		this->threeMinuteMenuItem->Name = L"threeMinuteMenuItem";
		this->threeMinuteMenuItem->Size = System::Drawing::Size(126, 22);
		this->threeMinuteMenuItem->Text = this->resourceManager->GetString("TIMER_OPTION_3");
		this->threeMinuteMenuItem->Click += gcnew System::EventHandler(this, &MyForm::threeMinuteMenuItem_Click);
		// 
		// reuseLettersToolStripMenuItem
		// 
		this->reuseLettersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->disableMenuItem, 
			this->enableToolMenuItem});
		this->reuseLettersToolStripMenuItem->Name = L"reuseLettersToolStripMenuItem";
		this->reuseLettersToolStripMenuItem->Size = System::Drawing::Size(143, 22);
		this->reuseLettersToolStripMenuItem->Text = this->resourceManager->GetString("REUSE_LETTERS");
		// 
		// disableMenuItem
		// 
		this->disableMenuItem->Name = L"disableMenuItem";
		this->disableMenuItem->Size = System::Drawing::Size(112, 22);
		this->disableMenuItem->Text = this->resourceManager->GetString("DISABLE");
		this->disableMenuItem->Click += gcnew System::EventHandler(this, &MyForm::disableMenuItem_Click);
		// 
		// enableToolMenuItem
		// 
		this->enableToolMenuItem->Name = L"enableToolMenuItem";
		this->enableToolMenuItem->Size = System::Drawing::Size(112, 22);
		this->enableToolMenuItem->Text = this->resourceManager->GetString("ENABLE");
		this->enableToolMenuItem->Click += gcnew System::EventHandler(this, &MyForm::enableMenuItem_Click);
		// 
		// viewToolStripMenuItem
		// 
		this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->highScoreMenuItem});
		this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
		this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
		this->viewToolStripMenuItem->Text = this->resourceManager->GetString("VIEW");
		// 
		// highScoreMenuItem
		// 
		this->highScoreMenuItem->Name = L"highScoreMenuItem";
		this->highScoreMenuItem->Size = System::Drawing::Size(137, 22);
		this->highScoreMenuItem->Text = this->resourceManager->GetString("SHOW_HIGH_SCORES");
		this->highScoreMenuItem->Click += gcnew System::EventHandler(this, &MyForm::highScoreMenuItem_Click);
		// 
		// clearButton
		// 
		this->clearButton->Location = System::Drawing::Point(93, 128);
		this->clearButton->Name = L"clearButton";
		this->clearButton->Size = System::Drawing::Size(75, 23);
		this->clearButton->TabIndex = 2;
		this->clearButton->Text = this->resourceManager->GetString("CLEAR_BUTTON");
		this->clearButton->UseVisualStyleBackColor = true;
		this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
		// 
		// undoButton
		// 
		this->undoButton->Enabled = false;
		this->undoButton->Location = System::Drawing::Point(12, 128);
		this->undoButton->Name = L"undoButton";
		this->undoButton->Size = System::Drawing::Size(75, 23);
		this->undoButton->TabIndex = 3;
		this->undoButton->Text = this->resourceManager->GetString("UNDO_BUTTON");
		this->undoButton->UseVisualStyleBackColor = true;
		this->undoButton->Click += gcnew System::EventHandler(this, &MyForm::undoButton_Click);
		// 
		// letterButton3
		// 
		this->letterButton3->Location = System::Drawing::Point(136, 163);
		this->letterButton3->Name = L"letterButton3";
		this->letterButton3->Size = System::Drawing::Size(56, 53);
		this->letterButton3->TabIndex = 4;
		this->letterButton3->UseVisualStyleBackColor = true;
		this->letterButton3->Click += gcnew System::EventHandler(this, &MyForm::letterButton_Click);
		// 
		// letterButton2
		// 
		this->letterButton2->Location = System::Drawing::Point(74, 163);
		this->letterButton2->Name = L"letterButton2";
		this->letterButton2->Size = System::Drawing::Size(56, 53);
		this->letterButton2->TabIndex = 5;
		this->letterButton2->UseVisualStyleBackColor = true;
		this->letterButton2->Click += gcnew System::EventHandler(this, &MyForm::letterButton_Click);
		// 
		// letterButton4
		// 
		this->letterButton4->Location = System::Drawing::Point(198, 163);
		this->letterButton4->Name = L"letterButton4";
		this->letterButton4->Size = System::Drawing::Size(56, 53);
		this->letterButton4->TabIndex = 6;
		this->letterButton4->UseVisualStyleBackColor = true;
		this->letterButton4->Click += gcnew System::EventHandler(this, &MyForm::letterButton_Click);
		// 
		// letterButton5
		// 
		this->letterButton5->Location = System::Drawing::Point(260, 163);
		this->letterButton5->Name = L"letterButton5";
		this->letterButton5->Size = System::Drawing::Size(56, 53);
		this->letterButton5->TabIndex = 7;
		this->letterButton5->UseVisualStyleBackColor = true;
		this->letterButton5->Click += gcnew System::EventHandler(this, &MyForm::letterButton_Click);
		// 
		// letterButton6
		// 
		this->letterButton6->Location = System::Drawing::Point(322, 163);
		this->letterButton6->Name = L"letterButton6";
		this->letterButton6->Size = System::Drawing::Size(56, 53);
		this->letterButton6->TabIndex = 8;
		this->letterButton6->UseVisualStyleBackColor = true;
		this->letterButton6->Click += gcnew System::EventHandler(this, &MyForm::letterButton_Click);
		// 
		// letterButton1
		// 
		this->letterButton1->Location = System::Drawing::Point(12, 163);
		this->letterButton1->Name = L"letterButton1";
		this->letterButton1->Size = System::Drawing::Size(56, 53);
		this->letterButton1->TabIndex = 10;
		this->letterButton1->UseVisualStyleBackColor = true;
		this->letterButton1->Click += gcnew System::EventHandler(this, &MyForm::letterButton_Click);
		// 
		// letterButton7
		// 
		this->letterButton7->Location = System::Drawing::Point(384, 163);
		this->letterButton7->Name = L"letterButton7";
		this->letterButton7->Size = System::Drawing::Size(56, 53);
		this->letterButton7->TabIndex = 11;
		this->letterButton7->UseVisualStyleBackColor = true;
		this->letterButton7->Click += gcnew System::EventHandler(this, &MyForm::letterButton_Click);
		// 
		// possibleWordsTextBox
		// 
		this->possibleWordsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
		this->possibleWordsTextBox->Location = System::Drawing::Point(369, 76);
		this->possibleWordsTextBox->Name = L"possibleWordsTextBox";
		this->possibleWordsTextBox->ReadOnly = true;
		this->possibleWordsTextBox->Size = System::Drawing::Size(71, 32);
		this->possibleWordsTextBox->TabIndex = 12;
		this->possibleWordsTextBox->Text = L"";
		// 
		// timer1
		// 
		this->timer1->Interval = 1000;
		this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
		// 
		// scoreTextBox
		// 
		this->scoreTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
		this->scoreTextBox->Location = System::Drawing::Point(369, 114);
		this->scoreTextBox->Name = L"scoreTextBox";
		this->scoreTextBox->ReadOnly = true;
		this->scoreTextBox->Size = System::Drawing::Size(71, 32);
		this->scoreTextBox->TabIndex = 13;
		this->scoreTextBox->Text = L"";
		// 
		// scoreLabel
		// 
		this->scoreLabel->AutoSize = true;
		this->scoreLabel->Location = System::Drawing::Point(333, 133);
		this->scoreLabel->Name = L"scoreLabel";
		this->scoreLabel->Size = System::Drawing::Size(35, 13);
		this->scoreLabel->TabIndex = 14;
		this->scoreLabel->Text = this->resourceManager->GetString("SCORE");
		// 
		// timerLabel
		// 
		this->timerLabel->AutoSize = true;
		this->timerLabel->Location = System::Drawing::Point(336, 52);
		this->timerLabel->Name = L"timerLabel";
		this->timerLabel->Size = System::Drawing::Size(33, 13);
		this->timerLabel->TabIndex = 15;
		this->timerLabel->Text = this->resourceManager->GetString("TIMER");
		// 
		// possibleWordsLabel
		// 
		this->possibleWordsLabel->AutoSize = true;
		this->possibleWordsLabel->Location = System::Drawing::Point(289, 95);
		this->possibleWordsLabel->Name = L"possibleWordsLabel";
		this->possibleWordsLabel->Size = System::Drawing::Size(80, 13);
		this->possibleWordsLabel->TabIndex = 16;
		this->possibleWordsLabel->Text = this->resourceManager->GetString("POSSIBLE_WORDS");
		// 
		// timerTextBox
		// 
		this->timerTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
		this->timerTextBox->Location = System::Drawing::Point(369, 33);
		this->timerTextBox->Name = L"timerTextBox";
		this->timerTextBox->ReadOnly = true;
		this->timerTextBox->Size = System::Drawing::Size(71, 32);
		this->timerTextBox->TabIndex = 17;
		this->timerTextBox->Text = L"";
		// 
		// inputTextBox
		// 
		this->inputTextBox->Location = System::Drawing::Point(13, 90);
		this->inputTextBox->Name = L"inputTextBox";
		this->inputTextBox->ReadOnly = true;
		this->inputTextBox->Size = System::Drawing::Size(155, 32);
		this->inputTextBox->TabIndex = 18;
		this->inputTextBox->Text = L"";
		// 
		// wordTextboxLabel
		// 
		this->wordTextboxLabel->AutoSize = true;
		this->wordTextboxLabel->Location = System::Drawing::Point(10, 67);
		this->wordTextboxLabel->Name = L"wordTextboxLabel";
		this->wordTextboxLabel->Size = System::Drawing::Size(60, 13);
		this->wordTextboxLabel->TabIndex = 19;
		this->wordTextboxLabel->Text = this->resourceManager->GetString("INPUT_WORD");
		// 
		// checkWordButton
		// 
		this->checkWordButton->Location = System::Drawing::Point(182, 92);
		this->checkWordButton->Name = L"checkWordButton";
		this->checkWordButton->Size = System::Drawing::Size(75, 23);
		this->checkWordButton->TabIndex = 20;
		this->checkWordButton->Text = this->resourceManager->GetString("CHECK_WORD");
		this->checkWordButton->UseVisualStyleBackColor = true;
		this->checkWordButton->Click += gcnew System::EventHandler(this, &MyForm::checkWordButton_Click);
		// 
		// wordsMissedTextBox
		// 
		this->wordsMissedTextBox->Location = System::Drawing::Point(267, 315);
		this->wordsMissedTextBox->Name = L"wordsMissedTextBox";
		this->wordsMissedTextBox->ReadOnly = true;
		this->wordsMissedTextBox->Size = System::Drawing::Size(178, 132);
		this->wordsMissedTextBox->TabIndex = 21;
		this->wordsMissedTextBox->Text = L"";
		// 
		// wordsFoundTextBox
		// 
		this->wordsFoundTextBox->Location = System::Drawing::Point(16, 315);
		this->wordsFoundTextBox->Name = L"wordsFoundTextBox";
		this->wordsFoundTextBox->ReadOnly = true;
		this->wordsFoundTextBox->Size = System::Drawing::Size(178, 132);
		this->wordsFoundTextBox->TabIndex = 22;
		this->wordsFoundTextBox->Text = L"";
		// 
		// wordsNotFoundLabel
		// 
		this->wordsNotFoundLabel->AutoSize = true;
		this->wordsNotFoundLabel->Location = System::Drawing::Point(315, 299);
		this->wordsNotFoundLabel->Name = L"wordsNotFoundLabel";
		this->wordsNotFoundLabel->Size = System::Drawing::Size(91, 13);
		this->wordsNotFoundLabel->TabIndex = 23;
		this->wordsNotFoundLabel->Text = this->resourceManager->GetString("WORDS_NOT_FOUND");
		// 
		// wordsFoundLabel
		// 
		this->wordsFoundLabel->AutoSize = true;
		this->wordsFoundLabel->Location = System::Drawing::Point(71, 299);
		this->wordsFoundLabel->Name = L"wordsFoundLabel";
		this->wordsFoundLabel->Size = System::Drawing::Size(71, 13);
		this->wordsFoundLabel->TabIndex = 24;
		this->wordsFoundLabel->Text = this->resourceManager->GetString("WORDS_FOUND");
		// 
		// welcomeLabel
		// 
		this->welcomeLabel->AutoSize = true;
		this->welcomeLabel->Location = System::Drawing::Point(12, 39);
		this->welcomeLabel->Name = L"welcomeLabel";
		this->welcomeLabel->Size = System::Drawing::Size(125, 13);
		this->welcomeLabel->TabIndex = 25;
		this->welcomeLabel->Text = this->resourceManager->GetString("WELCOME");
		// 
		// playerNameTextBox
		// 
		this->playerNameTextBox->Location = System::Drawing::Point(13, 225);
		this->playerNameTextBox->Name = L"playerNameTextBox";
		this->playerNameTextBox->Size = System::Drawing::Size(176, 20);
		this->playerNameTextBox->TabIndex = 26;
		this->playerNameTextBox->Text = this->resourceManager->GetString("PLAYER_NAME");
		// 
		// saveScoreButton
		// 
		this->saveScoreButton->Location = System::Drawing::Point(198, 222);
		this->saveScoreButton->Name = L"saveScoreButton";
		this->saveScoreButton->Size = System::Drawing::Size(118, 23);
		this->saveScoreButton->TabIndex = 27;
		this->saveScoreButton->Text = this->resourceManager->GetString("SAVE_SCORE");
		this->saveScoreButton->UseVisualStyleBackColor = true;
		this->saveScoreButton->Click += gcnew System::EventHandler(this, &MyForm::saveScoreButton_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(457, 459);
		this->Controls->Add(this->saveScoreButton);
		this->Controls->Add(this->playerNameTextBox);
		this->Controls->Add(this->welcomeLabel);
		this->Controls->Add(this->wordsFoundLabel);
		this->Controls->Add(this->wordsNotFoundLabel);
		this->Controls->Add(this->wordsFoundTextBox);
		this->Controls->Add(this->wordsMissedTextBox);
		this->Controls->Add(this->checkWordButton);
		this->Controls->Add(this->wordTextboxLabel);
		this->Controls->Add(this->inputTextBox);
		this->Controls->Add(this->timerTextBox);
		this->Controls->Add(this->possibleWordsLabel);
		this->Controls->Add(this->timerLabel);
		this->Controls->Add(this->scoreLabel);
		this->Controls->Add(this->scoreTextBox);
		this->Controls->Add(this->possibleWordsTextBox);
		this->Controls->Add(this->letterButton7);
		this->Controls->Add(this->letterButton1);
		this->Controls->Add(this->letterButton6);
		this->Controls->Add(this->letterButton5);
		this->Controls->Add(this->letterButton4);
		this->Controls->Add(this->letterButton2);
		this->Controls->Add(this->letterButton3);
		this->Controls->Add(this->undoButton);
		this->Controls->Add(this->clearButton);
		this->Controls->Add(this->playButton);
		this->Controls->Add(this->menuStrip1);
		this->MainMenuStrip = this->menuStrip1;
		this->Name = L"MyForm";
		this->Text = resourceManager->GetString("TITLE");
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();
	}

}
