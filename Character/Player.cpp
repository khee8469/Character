#include "Player.h"

Player::Player(string nickname)
{
	this->nickname = nickname;
}

void Player::printPlayerStatus()
{
	printf("Job Name: %s\n", jobname.c_str());
	printf("Nickname: %s\n", nickname.c_str());
	printf("Level: %d\n", level);
	printf("HP: %d\n", hp);
	printf("MP: %d\n", mp);
	printf("Power: %d\n", power);
	printf("Defence: %d\n", defence);
	printf("Accuracy: %d\n", accuracy);
	printf("Speed: %d\n", speed);
}

string Player::getJobName()
{
	return jobname;
}
string Player::getNickname()
{
	return nickname;
}
int Player::getLevel()
{
	return level;
}
int Player::getHP()
{
	return hp;
}
int Player::getMP()
{
	return mp;
}
int Player::getPower()
{
	return power;
}
int Player::getDefence()
{
	return defence;
}
int Player::getAccuracy()
{
	return accuracy;
}
int Player::getSpeed()
{
	return speed;
}



void Player::setNickname(string nickname)
{
	this->nickname = nickname;
}
bool Player::setHP(int HP) // ������ ��� ������ ������ ������ �ɵ�
{
	if (this->hp + hp > 0) // HP�� 0���� ũ��
	{
		this->hp += hp;
		return true;
	}
	else // HP�� 0 ���Ϸ� ��������
	{
		this->hp = 0;
		return false;
	}
}
bool Player::setMP(int MP)
{
	if (MP < 0) 
	{
		return false;
	}
	mp = MP;
	return true;
}
void Player::setPower(int power)
{
	this->power = power;
}
void Player::setDefence(int defence)
{
	this->defence = defence;
}
void Player::setAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}
void Player::setSpeed(int speed)
{
	this->speed = speed;
}

