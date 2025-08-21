#ifndef MAGICIAN_H
#define MAGICIAN_H

#include <iostream>
#include "Player.h"

class Magician : public Player
{
public:
	Magician(string nickname);

	void Attack(Monster* monster) override;
};
#endif
