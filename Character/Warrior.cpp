#include "Warrior.h"

Warrior::Warrior(string nickname) : Player(nickname)
{
	jobname = "����";
	level = 1;
	hp = 100;
	mp = 30;
	power = 30;
	defence = 30;
	accuracy = 30;
	speed = 20;
}

void Warrior::Attack(Monster* monster)
{
	printf("���� ����\n");
	if(power > monster->getDefence())
	{
		printf("%s���� �б�� %d�� ���ظ� ������!\n", monster->getName().c_str(), power - monster->getDefence());
		monster->setHP(-(power - monster->getDefence()));
	}
	else
	{
		printf("%s���� �б�� %d�� ���ظ� ������!\n", monster->getName().c_str(), 1);
		monster->setHP(-1);
	}
}