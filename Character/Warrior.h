#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include "Player.h"

class Warrior : public Player
{
public:
	Warrior(string nickname);

	void Attack(Monster* monster) override;
};
#endif
