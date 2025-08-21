#include "Monster.h"

Monster::Monster(string name)
{
	this->name = name;
	this->hp = 10; // 기본 HP
	this->power = 30; // 기본 공격력
	this->defence = 10; // 기본 방어력
	this->speed = 10; // 기본 속도
}

void Monster::Attack(Player* player)
{

}



string Monster::getName()
{
	return name;
}
int Monster::getHP()
{
	return hp;
}
int Monster::getPower()
{
	return power;
}
int Monster::getDefence()
{
	return defence;
}
int Monster::getSpeed()
{
	return speed;
}



void Monster::setName(string name)
{
	this->name = name;
}
bool Monster::setHP(int hp)
{
	if (this->hp + hp > 0) // HP가 0보다 크면
	{
		this->hp += hp;
		printf("%s의 남은 체력 : %d\n", this->name.c_str(), this->hp);
		return true;
	}
	else // HP가 0 이하로 떨어지면
	{
		this->hp = 0;
		printf("%s의 남은 체력 : %d\n", this->name.c_str(), 0);
		printf("플레이어 승리.\n");
		return false;
	}
}
void Monster::setPower(int power)
{
	this->power = power;
}
void Monster::setDefence(int defence)
{
	this->defence = defence;
}
void Monster::setSpeed(int speed)
{
	this->speed = speed;
}
