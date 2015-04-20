#ifndef PLAYER_H_
#define PLAYER_H_

namespace Project1 {
public class Game
{
private:
	string name;
	int score;
	int time;

public:
	Player();
	Player();
	string getName();
	int getScore();
	int getTime();
	~Player();
};
}
#endif