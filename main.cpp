#include <stdio.h>
#include"Enemy.h"
#include<Windows.h>
int main() {
	Enemy* enemy = new Enemy;
	BYTE key[256];
	GetKeyboardState(key);
	printf("SPACE����������I���");
	while (true)
	{
		enemy->Update();
		if (key[VK_SPACE] & 0x80) {
			break;
		}
		
		
	}
	delete enemy;
	return 0;
}
