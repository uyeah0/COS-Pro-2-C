#include<stdio.h>
#include<string.h>

int solution(int value, char* unit) {
	int tem;
	if (strcmp(unit, "C") == 0) {
		tem = (value * 1.8) + 32;
	}
	else if (strcmp(unit, "F") == 0){
		tem = (value - 32) / 1.8;
	}
	return tem;
}

int main() {
	int value = 527;
	char* unit = "C";
	int ret = solution(value, unit);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}