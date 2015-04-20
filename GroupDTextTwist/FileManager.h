#ifndef FILEMANAGER_H_
#define FILEMANAGER_H_

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <functional>

#include "HighScore.h"
#include "Dictionary.h"
using namespace model; 



namespace io {

	public class FileManager{
	private:
	    string SCORES_FILE ;
	    string WORD_FILE;
		Dictionary* dictionary;
		void readInWords();

	public:
		FileManager();
		void setDictionary(Dictionary* dictionary);
		vector<HighScore> readInScores();
		void saveScores(string highscores);
		~FileManager();
	};
}

#endif