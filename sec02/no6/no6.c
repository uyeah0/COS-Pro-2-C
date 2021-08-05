#include<stdio.h>

int solution(int floors[], int floors_len) {
	int s = floors[0];
	int sum = 0;
	for (int i = 1; i < floors_len; i++) {
		if (s < floors[i]) {
			sum += floors[i] - s;
			s = floors[i];
		}
		else {
			sum += s - floors[i];
			s = floors[i];
		}
	}
	return sum;
}

int main() {
	int floors[5] = { 1, 2, 5, 4, 2 };
	int floors_len = 5;
	int ret = solution(floors, floors_len);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
