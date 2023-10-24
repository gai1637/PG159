#include "Enemy.h"
void (Enemy::*Enemy::pFunc[])() = {
		&Enemy::Approach,
		&Enemy::Shot,
		&Enemy::Leave
};
void Enemy::Approach() {
	printf("�ڋ�\n");
	phase_ = Phase::Shot;
}
void Enemy::Shot() {
	printf("�ˌ�\n");
	phase_ = Phase::Leave;
}
void Enemy::Leave() {
	printf("���E\n");
	phase_ = Phase::Approach;
}
void Enemy::Update() {
	if (count > 0) {
		count--;
	}
	else
	{
		(this->*pFunc[static_cast<size_t>(phase_)])();
		count = 1000;
	}
	
}