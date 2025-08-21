#ifndef ARCHER_H
#define ARCHER_H

#include <iostream>
#include "Player.h"

class Archer : public Player
{
public:
	Archer(string nickname);

	void Attack(Monster* monster) override;
};
#endif
