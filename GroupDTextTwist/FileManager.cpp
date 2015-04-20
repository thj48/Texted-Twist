#include "FileManager.h"

namespace io
{
	/// <summary>
	/// Constructs a filemanager.
	/// </summary>
	FileManager::FileManager() 
	{
		this->SCORES_FILE = "highscores.txt";
		this->WORD_FILE = "dictionary.txt";
		this->dictionary = 0;
	}

	/// <summary>
	/// Sets the dictionary.
	/// </summary>
	/// <param name="aDictionary">a pointer to a dictionary</param>
	void FileManager::setDictionary(Dictionary* aDictionary) {
		this->dictionary = aDictionary;
		this->readInWords();
	}

	/// <summary>
	/// Returns a vector of highscores.
	/// </summary>
	///<return>a vector of highscore</return>
	vector<HighScore> FileManager::readInScores(){
		ifstream file(SCORES_FILE);
		vector<HighScore> highScores = vector<HighScore>();
		string score;
		string name;
		string currentLine;

		while (file.good()) {
			getline(file, currentLine, ',');
			name = string(currentLine, 0, currentLine.length());
			getline(file, currentLine, '\n');
			score = string(currentLine, 0, currentLine.length());
			HighScore currentScore = HighScore(name, score);
			highScores.push_back(currentScore);
		}
		file.close();
		return highScores;
	}

	/// <summary>
	/// Writes the highscores to a file
	/// </summary>
	/// <param name="highscores">a string of highscores</param>
	void FileManager::saveScores(string highScores){
		ofstream file;
		file.open(SCORES_FILE.c_str(), ios::out | ios::app);
		file << highScores;
		file.close();
	}

	void FileManager::readInWords() {
		ifstream file(WORD_FILE);
		string value;
		while (file.good()) {
			getline(file, value);
			this->dictionary->addWord(value);
		}		
	}

	/// <summary>
	/// Deconstructs the filemanager.
	/// </summary>
	FileManager::~FileManager() 
	{

	}
}