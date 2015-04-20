#include "Dictionary.h"

namespace model
{
	/// <summary>
	/// Constructs the dictionary.
	/// </summary>
	Dictionary::Dictionary() 
	{
		this->dictionary = vector<string>();
	}

	/// <summary>
	/// Deconstructs the dictionary.
	/// </summary>
	Dictionary::~Dictionary() 
	{

	}

	/// <summary>
	/// Adds a word to the dictionary.
	/// </summary>
	/// <param name="word">a string representation of the word being added</param>
	void Dictionary::addWord(string word) 
	{
		if(!this->wordExists(word)) 
		{
			this->dictionary.push_back(word);
		}
	}

	/// <summary>
	/// Deletes a word from the dictionary
	/// </summary>
	/// <param name="word">the word being deleted</param>
	void Dictionary::deleteWord(string word)
	{
		this->dictionary.erase( remove(this->dictionary.begin(), this->dictionary.end(), word), this->dictionary.end());	
	}

	void Dictionary::sortDictionary()
	{
		sort(this->dictionary.begin(), this->dictionary.end());
	}

	/// <summary>
	/// returns whether the word exists or not
	/// </summary>
	/// <param name="word">a string being searched for</param>
	///<return>a boolean value indicating if the word was found</return>
	bool Dictionary::wordExists(string word) 
	{
		return binary_search(this->dictionary.begin(), this->dictionary.end(), word);
	}
	
	/// <summary>
	/// Returns a vector of all words contained in the dictionary
	/// </summary>
	///<return>a vector of strings</return>
	vector<string> Dictionary::getWordList()
	{
		return this->dictionary;
	}

	void Dictionary::clear() 
	{
		this->dictionary.clear();
	}
}