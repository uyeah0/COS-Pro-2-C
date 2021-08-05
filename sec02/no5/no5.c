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

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
	return 0;
}
