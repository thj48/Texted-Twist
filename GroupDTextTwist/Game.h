#ifndef GAME_H_
#define GAME_H_

#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h> 
using namespace std;

#include "HighScoresController.h"
using namespace controller;

#include "HighScore.h"
#include "Dictionary.h"
#include "WordManager.h"
using namespace model;

#include "FileManager.h"
using namespace io;

namespace controller {
public class Game
{
private:
	int score;
	int amountOfPossibleWords;
	bool reuseLetters;
	const static int randomLetterAmount = 7;
	vector<char> letters;
	string randomLetters;
	Dictionary* wordsLeftDictionary;
	Dictionary* wordsFoundDictionary;
	FileManager* fileManager;
	WordManager* wordManager;
	HighScoresController* scoreController;

	void generateLetters();
	void calculatePoints(string input);
	void populateLetterVector();
	void addLetter(char letter, int num);

public:
	Game();
	~Game();

	void start(bool reuseLetters);
	bool checkInputWord(string input);
	int getAmountofPossibleWords();
	string getRemainingWords();
	int getScore();
	string getLetters();
	string getHighScoreNames();
	string getHighScores();
	HighScoresController* getScoreController();

};
}
#endif