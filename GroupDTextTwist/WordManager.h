#ifndef WORDMANAGER_H_
#define WORDMANAGER_H_

#include <algorithm>

#include "FileManager.h"
using namespace io;

namespace model {
public class WordManager
{
private:
	Dictionary* dictionary;
	Dictionary* randomLetterPermutations;
	Dictionary* possibleWords;
	FileManager* fileManager;
	const static int minLetters = 3;
	void findAllPossibleWords();
	void findAllPossiblePermutations(string s,int i,int n);
	void addToPossiblePermutations(string word);
	void swap(char& a, char& b);	

public:
	WordManager(FileManager* aFileManager);
	void generateWords(string letters);
	Dictionary* getPossibleWords();
	Dictionary* getEntireDictionary();
	~WordManager();
};
}
#endif