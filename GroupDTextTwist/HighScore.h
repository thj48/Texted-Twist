#ifndef HIGHSCORE_H_
#define HIGHSCORE_H_

#include <stdlib.h>
#include <string>
using namespace std;

namespace model {

public class HighScore
{
private:
	string name;
	string score;

public:
	HighScore(const string& aName, const string& aScore);
	~HighScore();
	string getName();
	string getScore();
	bool operator<(HighScore aScore);
};

}
#endif
