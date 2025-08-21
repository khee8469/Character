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

	virtual void Attack(Monster* monster) = 0;  // ���⸦ �ֵθ��⸸ �ϴ� �⺻���� ���� �Լ�
	void printPlayerStatus();

    // getter �Լ�
    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter �Լ�
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
	int accuracy; // ��Ȯ��
	int speed;
};
#endif
