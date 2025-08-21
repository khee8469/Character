#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Archer.h"
#include "Thief.h"
#include "Magician.h"

enum ClassType
{
	WARRIOR = 0,
	ARCHER,
	THIEF,
	MAGICIAN,
	UNKNOWN
};

int main()
{
	Player* player[UNKNOWN];
	ClassType classType = UNKNOWN;
	Monster monster("몬스터");

	int inputNum;

	// 직업 선택
	while(classType == UNKNOWN)
	{
		printf("직업을 선택하세요.\n");
		printf("1. 전사 2. 마법사 3. 도적 4. 궁수\n");
		if (scanf("%d", &inputNum) != 1) // 숫자가 아닌 경우
		{
			printf("잘못된 입력입니다.\n");
			while(getchar() != '\n');
			continue;
		}
		if (inputNum < 1 || inputNum > 4) // 범위 초과
		{
			printf("잘못된 직업 번호입니다.\n");
			continue;
		}
		
		classType = (ClassType)(inputNum-1);
	}

	// 선택한 직업 공격
	switch (classType)
	{
		case WARRIOR:
			player[WARRIOR] = new Warrior("전사맨");
			player[WARRIOR]->Attack(&monster);
			break;
		case ARCHER:
			player[ARCHER] = new Archer("궁수맨");
			player[ARCHER]->Attack(&monster);
			break;
		case THIEF:
			player[THIEF] = new Thief("도적맨");
			player[THIEF]->Attack(&monster);
			break;
		case MAGICIAN:
			player[MAGICIAN] = new Magician("마법사맨");
			player[MAGICIAN]->Attack(&monster);
			break;
	}


	


	return 0;
}