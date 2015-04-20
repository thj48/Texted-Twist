#include "HighScore.h"

namespace model {

	/// <summary>
	/// Constructs the highscore.
	/// </summary>
	/// <param name="aName">the players name</param>
	/// <param name="aScore">the current games score</param>
	HighScore::HighScore(const string& aName, const string& aScore)
	{
		this->name = aName;
		this->score = aScore;
	}

	/// <summary>
	/// Deconstructs the highscore.
	/// </summary>
	HighScore::~HighScore()
	{

	}

	/// <summary>
	/// Returns the name.
	/// </summary>
	///<return>a string representation of the name</return>
	string HighScore::getName()
	{
		return this->name;
	}

	/// <summary>
	/// Returns the score.
	/// </summary>
	///<return>a string representationof the score</return>
	string HighScore::getScore()
	{
		return this->score;
	}

	/// <summary>
	/// Compares another highscore.
	/// </summary>
	/// <param name="aScore">the highscore to be compared</param>
	///<return>a boolean representation of where the score is greater</return>
	bool HighScore::operator<(HighScore aScore)
	{
		return atoi(this->score.c_str()) > atoi(aScore.getScore().c_str());
	}

}