#include "Monster.h"

Monster::Monster(string name)
{
	this->name = name;
	this->hp = 10; // �⺻ HP
	this->power = 30; // �⺻ ���ݷ�
	this->defence = 10; // �⺻ ����
	this->speed = 10; // �⺻ �ӵ�
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
	if (this->hp + hp > 0) // HP�� 0���� ũ��
	{
		this->hp += hp;
		printf("%s�� ���� ü�� : %d\n", this->name.c_str(), this->hp);
		return true;
	}
	else // HP�� 0 ���Ϸ� ��������
	{
		this->hp = 0;
		printf("%s�� ���� ü�� : %d\n", this->name.c_str(), 0);
		printf("�÷��̾� �¸�.\n");
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
