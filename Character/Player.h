#ifndef PLAYER_H
#define PLAYER_H

#include "Monster.h"
#include <string>

using namespace std;

class Monster;

class Player
{
public:
	Player(string nickname);

	virtual void Attack(Monster* monster) = 0;  // 무기를 휘두르기만 하는 기본적인 공격 함수
	void printPlayerStatus();

    // getter 함수
    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter 함수
    void setNickname(string nickname);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);


protected:
	string jobname;
	string nickname;
	int level;
	int hp;
	int mp;
	int power;
	int defence;
	int accuracy; // 정확도
	int speed;
};
#endif
