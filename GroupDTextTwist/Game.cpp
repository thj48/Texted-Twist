#include "Game.h"

namespace controller {

/// <summary>
/// Constructs the Game.
/// </summary>
Game::Game()
{
	this->wordsLeftDictionary = new Dictionary();
	this->wordsFoundDictionary= new Dictionary();
	this->fileManager = new FileManager();	
	this->scoreController = new HighScoresController(this->fileManager);
	this->wordManager = new WordManager(this->fileManager);
	this->randomLetters ="";
	this->letters = vector<char>();
	this->score = 0;
	this->amountOfPossibleWords = 0;
	srand (time(NULL));
}

/// <summary>
/// Initiates the game.
/// </summary>
/// <param name="reuseLetters">a boolean value that indicates the reuse of letters</param>
void Game::start(bool reuseLetters)
{
	this->score = 0;
	this->populateLetterVector();
	this->reuseLetters = reuseLetters;
	this->generateLetters();

	if (!reuseLetters){
		this->wordManager->generateWords(this->randomLetters);
		this->wordsLeftDictionary = this->wordManager->getPossibleWords();
		this->amountOfPossibleWords =this->wordsLeftDictionary->getWordList().size();
	}else{
		this->wordsLeftDictionary = this->wordManager->getEntireDictionary();
	}
}

/// <summary>
/// Generates the random letters.
/// </summary>
void Game::generateLetters()
{
	int index;
	this->randomLetters = "";
	
	for (int i = 0; i < randomLetterAmount; i++)
	{
		index = rand() % (this->letters.size()+1);
		this->randomLetters += this->letters[index];
	}

	if (this->reuseLetters)
	{
		this->randomLetters+=this->randomLetters;
	}
}

/// <summary>
/// Constructs the WordManager.
/// </summary>
/// <param name="input">a string representations of the users input</param>
/// <return> a boolean representations if the input word was correct </return>
bool Game::checkInputWord(string input)
{
	if (this->wordsFoundDictionary->wordExists(input))
	{
		return false;
	}

	if (this->wordsLeftDictionary->wordExists(input))
	{		
		this->wordsFoundDictionary->addWord(input);
		this->wordsLeftDictionary->deleteWord(input);
		this->calculatePoints(input);
		return true;
	}
	else
	{
		this->score--;
		return false;
	}
}

/// <summary>
/// Returns the words not found.
/// </summary>
/// <return> a string representation of the words not found</return>
string Game::getRemainingWords()
{
	string remainingWord = "";
	vector<string>wordsLeft = this->wordsLeftDictionary->getWordList();

	for (auto & element : wordsLeft)
	{
		remainingWord += element;
		remainingWord += "\n";
	}

	return remainingWord;
}

void Game::calculatePoints(string input)
{
	int length = input.length();
	if (length < 5)
	{
		this->score++;
	}
	else if (length < 6)
	{
		this->score += 2;
	}
	else if (length < 7)
	{
		this->score += 3;
	}
	else if (length < 8)
	{
		this->score += 5;
	}
	else
	{
		this->score += 11;
	}
}

void Game::populateLetterVector()
{
	this->addLetter('e',11);
	this->addLetter('t',9);
	this->addLetter('o',8);
	this->addLetter('a',6);
	this->addLetter('i',6);
	this->addLetter('n',6);
	this->addLetter('s',6);
	this->addLetter('h',5);
	this->addLetter('r',5);
	this->addLetter('l',4);
	this->addLetter('d',3);
	this->addLetter('u',3);
	this->addLetter('w',3);
	this->addLetter('y',3);
	this->addLetter('b',2);
	this->addLetter('c',2);
	this->addLetter('f',2);
	this->addLetter('g',2);
	this->addLetter('m',2);
	this->addLetter('p',2);
	this->addLetter('v',2);
	this->addLetter('j',1);
	this->addLetter('k',1);
	this->addLetter('q',1);
	this->addLetter('x',1);
	this->addLetter('z',1);
}

void Game::addLetter(char letter, int num)
{
	for (int i = 0; i < num; i++)
	{
		this->letters.push_back(letter);
	}
}

/// <summary>
/// Returns the amount of possible words
/// </summary>
int Game::getAmountofPossibleWords()
{
	return this->amountOfPossibleWords;
}

/// <summary>
/// Returns the current score
/// </summary>
int Game::getScore()
{
	return this->score;
}

/// <summary>
/// Returns the random letters
/// </summary>
/// <return> a string representations of the random letters </return>
string Game::getLetters()
{
	return this->randomLetters;
}

/// <summary>
/// Returns high score names.
/// </summary>
/// <return> a string representation of high score names </return>
string Game::getHighScoreNames()
{
	string returnString = "";
	for (auto & element : this->scoreController->getScores())
	{
		returnString += element.getName();
		returnString += "\n";
	}
	return returnString;
}

/// <summary>
/// Returns highscores.
/// </summary>
/// <return> a string representations of highscores </return>
string Game::getHighScores()
{
	string returnString = "";
	for (auto & element : this->scoreController->getScores())
	{
		returnString += element.getScore();
		returnString += "\n";
	}
	return returnString;
}

/// <summary>
/// Returns a highscore controller.
/// </summary>
/// <return> a pointer to a highscorecontroller</return>
HighScoresController* Game::getScoreController()
{
	return this->scoreController;
}

/// <summary>
/// Deconstructs the Game.
/// </summary>
Game::~Game()
{
	delete this->wordsLeftDictionary;
	delete this->wordsFoundDictionary;
	delete this->fileManager;
	delete this->scoreController;
	delete this->wordManager;
}

}