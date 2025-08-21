#include "Thief.h"

Thief::Thief(string nickname) : Player(nickname)
{
	jobname = "����";
	level = 1;
	hp = 80;
	mp = 50;
	power = 40;
	defence = 20;
	accuracy = 40;
	speed = 40;
}

void Thief::Attack(Monster* monster)
{
	printf("���� ����");
	if (power > monster->getDefence() + 5)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%s���� �ܰ����� %d�� ���ظ� ������!\n", monster->getName().c_str(), (power - monster->getDefence()) / 5);
			monster->setHP(-(power - monster->getDefence())/5);

			if (monster->getHP() <= 0)
			{
				return;
			}
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%s���� �ܰ����� %d�� ���ظ� ������!\n", monster->getName().c_str(), 1);
			monster->setHP(-1);

			if (monster->getHP() <= 0)
			{
				return;
			}
		}
	}
}