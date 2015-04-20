#ifndef HIGHSCORESCONTROLLER_H_
#define HIGHSCORESCONTROLLER_H_

#include <stdlib.h>
#include <time.h> 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Dictionary.h"
#include "FileManager.h"
using namespace io;

#include "HighScore.h"
using namespace model;

namespace controller {
public class HighScoresController
{
private:
	FileManager* fileManager;
	vector<HighScore> highScores;
	void sortScores();

public:
	HighScoresController(FileManager* aFileManager);
	~HighScoresController();
	void readHighScores();
	void saveScore(const string& name, int time, int score);
	vector<HighScore> getScores();
};
}
#endif