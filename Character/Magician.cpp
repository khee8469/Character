#include "Magician.h"

Magician::Magician(string nickname) : Player(nickname)
{
	jobname = "������";
	level = 1;
	hp = 50;
	mp = 100;
	power = 50;
	defence = 10;
	accuracy = 20;
	speed = 10;
}

void Magician::Attack(Monster* monster)
{
	printf("������ ����");
	if (power > monster->getDefence())
	{
		printf("%s���� ���̾�� %d�� ���ظ� ������!\n", monster->getName().c_str(), power - monster->getDefence());
		monster->setHP(-(power - monster->getDefence()));
	}
	else
	{
		printf("%s���� ���̾�� %d�� ���ظ� ������!\n", monster->getName().c_str(), 1);
		monster->setHP(-1);
	}
}