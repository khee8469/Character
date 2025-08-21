#ifndef THIEF_H
#define THIEF_H

#include <iostream>
#include "Player.h"

class Thief : public Player
{
public:
	Thief(string nickname);

	void Attack(Monster* monster) override;
};
#endif
