#include<stdio.h>

int solution(int calorie[], int calorie_len) {
	int answer = 0;
	int min = calorie[0];
	for (int i = 0; i < calorie_len; i++) {
		if (min < calorie[i]) answer += calorie[i] - min;
		else if (min > calorie[i]) min = calorie[i];
	}

	return answer;
}

void main() {
	int calorie[] = { 713, 665, 873, 500, 751 };
	int ret = solution(calorie, 5);

	printf("solution 함수의 반환 값은 %d 입니다", ret);
}