
#ifndef DICTIONARY_H_
#define DICTIONARY_H_


#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iostream>
using namespace std;

namespace model {

	public class Dictionary 
	{
	private:
		vector<string> dictionary;
	public:
		Dictionary();
		~Dictionary();
		void addWord(string word);
		void deleteWord(string word);
		bool wordExists(string word);
		vector<string> getWordList();
		void sortDictionary();
		void clear();
	};
}

#endif