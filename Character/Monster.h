#ifndef MONSTER_H
#define MONSTER_H

#include "Player.h"
#include <string>

using namespace std;

class Player;

class Monster
{
public:
	Monster(string name);

	void Attack(Player* player) ;

    // getter
    string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();

    // setter
    void setName(string name);
    bool setHP(int hp);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name;
    int hp;
    int power;
    int defence;
    int speed;
};
#endif
