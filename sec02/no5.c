#include<stdio.h>

int solution(int attack, int recovery,int hp) {
	int cnt = 0;
	while (1) {
		if (hp <= 0)break;
		hp -= attack;
		hp += recovery;
		cnt++;
	}
	return cnt;
}

int main() {
	int attack = 30;
	int recovery = 10;
	int hp = 60;
	int ret = solution(attack, recovery, hp);

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
	return 0;
}