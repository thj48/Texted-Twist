#pragma once

#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Timers;


#include "Game.h"
#include "HighScoresController.h"
using namespace controller;

namespace view {
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm(); 

	private: 
		//Variables 
		Button^ lastSelected;
		HighScoresController* highScoresController;
		Game* game;
		const static int minWordLength = 3;
		const static int oneMinute = 60;
		const static int twoMinutes = 120;
		const static int threeMinutes = 180;
		int gameTime;
		int timeRemaining;
		int count;
		bool reuseLetters;

		//String Table
		Resources::ResourceManager^ resourceManager;

		//Menu Strip
		System::Windows::Forms::MenuStrip^  menuStrip1;

		//Menu Strip Items
		System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  timerToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  oneMinuteMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  twoMinuteMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  threeMinuteMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  highScoreMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  reuseLettersToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  disableMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  enableToolMenuItem;

		//Buttons
		System::Windows::Forms::Button^  clearButton;
		System::Windows::Forms::Button^  undoButton;
		System::Windows::Forms::Button^  letterButton3;
		System::Windows::Forms::Button^  letterButton2;
		System::Windows::Forms::Button^  letterButton4;
		System::Windows::Forms::Button^  letterButton5;
		System::Windows::Forms::Button^  letterButton6;
		System::Windows::Forms::Button^  letterButton1;
		System::Windows::Forms::Button^  letterButton7;
		System::Windows::Forms::Button^  checkWordButton;
		System::Windows::Forms::Button^  playButton;
		System::Windows::Forms::Button^  saveScoreButton;
	 
		//Rich Textboxes
		System::Windows::Forms::RichTextBox^  possibleWordsTextBox;
		System::Windows::Forms::RichTextBox^  scoreTextBox;
		System::Windows::Forms::RichTextBox^  timerTextBox;
		System::Windows::Forms::RichTextBox^  inputTextBox;
		System::Windows::Forms::RichTextBox^  wordsMissedTextBox;
		System::Windows::Forms::RichTextBox^  wordsFoundTextBox;
		System::Windows::Forms::TextBox^  playerNameTextBox;

		//Timer
		System::Windows::Forms::Timer^  timer1;
	
		//Labels
		System::Windows::Forms::Label^  possibleWordsLabel;
		System::Windows::Forms::Label^  scoreLabel;
		System::Windows::Forms::Label^  timerLabel;
		System::Windows::Forms::Label^  wordTextboxLabel;
		System::Windows::Forms::Label^  wordsNotFoundLabel;
		System::Windows::Forms::Label^  wordsFoundLabel;
		System::Windows::Forms::Label^  welcomeLabel;

		//Containers
		System::ComponentModel::IContainer^  components;
	 
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
		//event handlers here 
	
	private:
		//Methods
		System::Void letterButton_Click(System::Object^  sender, System::EventArgs^  e) ;
		System::Void undoButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e) ;
		System::Void checkWordButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) ;
		System::Void highScoreMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void oneMinuteMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void twoMinuteMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void threeMinuteMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void disableMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void enableMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void playButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
		System::Void saveScoreButton_Click(System::Object^  sender, System::EventArgs^  e);
		string marshallSystemToStandardString(String^ system);
		String^ marshallStandardToSystemString(string standard);
		void setUpForm();
		void handleResult(bool correct, string input);
		void setUpTextBoxes();
		void disableSettings();
		void enableSettings();
		void setUpButtons();
		void resetLetterButtons();
		void checkIfAllWordsFound();
		
		
};
}
