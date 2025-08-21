#include "Archer.h"

Archer::Archer(string nickname) : Player(nickname)
{
	jobname = "궁수";
	level = 1;
	hp = 70;
	mp = 80;
	power = 30;
	defence = 10;
	accuracy = 50;
	speed = 30;
}

void Archer::Attack(Monster* monster)
{
	printf("궁수 공격");
	if (power > monster->getDefence() + 3)
	{
		for(int i = 0; i < 3; i++)
		{
			printf("%s에게 화살로 %d의 피해를 입혔다!\n", monster->getName().c_str(), (power - monster->getDefence()) / 3);
			monster->setHP(-(power - monster->getDefence())/3);

			if(monster->getHP() <= 0)
			{
				return;
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%s에게 화살로 %d의 피해를 입혔다!\n", monster->getName().c_str(), 1);
			monster->setHP(-1);

			if (monster->getHP() <= 0)
			{
				return;
			}
		}
	}
}