#include "WordManager.h"


namespace model 
{
	/// <summary>
	/// Constructs the WordManager.
	/// </summary>
	/// <param name="aFileManager">The manager of reading and writing files</param>
	WordManager::WordManager(FileManager* aFileManager)
	{
		this->dictionary = new Dictionary();
		this->randomLetterPermutations = new Dictionary();
		this->possibleWords = new Dictionary();
		this->fileManager = aFileManager;
		this->fileManager->setDictionary(this->dictionary);
	}

	/// <summary>
	/// Deconstructs the WordManager.
	/// </summary>
	WordManager::~WordManager()
	{
		delete this->dictionary;
		delete this->randomLetterPermutations;
		delete this->possibleWords;
	}

	/// <summary>
	/// Computes all of the possible words from the letters
	/// </summary>
	/// <param name="letters"> The random generated letters</param>
	void WordManager::generateWords(string letters)
	{
		this->randomLetterPermutations->clear();
		this->possibleWords->clear();
		this->findAllPossiblePermutations(letters, 0, letters.length() - 1);
		this->findAllPossibleWords();

		int possibleWords = this->possibleWords->getWordList().size();
		if (possibleWords == 0)
		{
			this->generateWords(letters);
		}
	}

	/// <summary>
	/// Returns the entire dictionary
	/// </summary>
	/// <return> Retuens a Dictionary</return>
	Dictionary* WordManager::getEntireDictionary(){
		return this->dictionary;
	}

	void WordManager::findAllPossibleWords()
	{
		bool exists;

		for (auto & element : randomLetterPermutations->getWordList()){
			exists = this->dictionary->wordExists(element);

			if(exists){
				this->possibleWords->sortDictionary();
				this->possibleWords->addWord(element);				
			}
		}
	}

	void WordManager::findAllPossiblePermutations(string word,int i,int length) 
	{
		int j;
		if (i == length)
		{
			this->randomLetterPermutations->addWord(word);
			this->addToPossiblePermutations(word);
		}
		else
		{
			for (j = i; j < word.length(); j++)
			{
				swap(word[i],word[j]);
				findAllPossiblePermutations(word, i + 1, length);
				swap(word[i],word[j]);
			}  
		}
	}

	void WordManager::addToPossiblePermutations(string word)
	{
		for (int i = word.length(); i >= minLetters; i--)
		{
			word.erase(i);			
			this->randomLetterPermutations->addWord(word);			
		}
	}

	void WordManager::swap(char& a, char& b)
	{
		char temp;
		temp = a;
		a = b;
		b = temp;
	}

	/// <summary>
	/// Returns a dictionary object of the possible words avaliable.
	/// </summary>
	/// <return> A dictionary of possible words</return>
	Dictionary* WordManager::getPossibleWords()
	{
		return this->possibleWords;
	}	

}