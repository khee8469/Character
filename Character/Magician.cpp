#include "Magician.h"

Magician::Magician(string nickname) : Player(nickname)
{
	jobname = "마법사";
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
	printf("마법사 공격");
	if (power > monster->getDefence())
	{
		printf("%s에게 파이어볼로 %d의 피해를 입혔다!\n", monster->getName().c_str(), power - monster->getDefence());
		monster->setHP(-(power - monster->getDefence()));
	}
	else
	{
		printf("%s에게 파이어볼로 %d의 피해를 입혔다!\n", monster->getName().c_str(), 1);
		monster->setHP(-1);
	}
}