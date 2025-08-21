#include "Warrior.h"

Warrior::Warrior(string nickname) : Player(nickname)
{
	jobname = "전사";
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
	printf("전사 공격\n");
	if(power > monster->getDefence())
	{
		printf("%s에게 둔기로 %d의 피해를 입혔다!\n", monster->getName().c_str(), power - monster->getDefence());
		monster->setHP(-(power - monster->getDefence()));
	}
	else
	{
		printf("%s에게 둔기로 %d의 피해를 입혔다!\n", monster->getName().c_str(), 1);
		monster->setHP(-1);
	}
}