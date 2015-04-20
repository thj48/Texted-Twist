#include "HighScoresController.h"



namespace controller {

	/// <summary>
	/// Constructs a highscorecontroller.
	/// </summary>
	/// <param name="aFileManager">a pointer to a filemanager object</param>
	HighScoresController::HighScoresController(FileManager* aFileManager)
	{
		this->fileManager = aFileManager;
		this->readHighScores();
	}

	/// <summary>
	/// Deconstructs a highscorecontroller.
	/// </summary>
	HighScoresController::~HighScoresController()
	{
		
	}

	/// <summary>
	/// Reads in the highscores 
	/// </summary>
	void HighScoresController::readHighScores() 
	{
		this->highScores = this->fileManager->readInScores();
		this->sortScores();
	}

	/// <summary>
	/// Saves the current score to the highscores.
	/// </summary>
	/// <param name="name">the current players name</param>
	/// <param name="score">current games score</param>
	void HighScoresController::saveScore(const string& name, int time, int score) 
	{
		string rawScore = "";
		rawScore += name;
		rawScore += " Time:";
		rawScore += to_string(time);
		rawScore += ",";
		rawScore += to_string(score);
		rawScore += "\n";
		this->fileManager->saveScores(rawScore);
	}

	void HighScoresController::sortScores() 
	{
		sort(this->highScores.begin(), this->highScores.end());
	}

	/// <summary>
	/// Returns a vector of highScores
	/// </summary>
	///<return>A vector of highscore</return>
	vector<HighScore> HighScoresController::getScores() 
	{
		return this->highScores;
	}
}