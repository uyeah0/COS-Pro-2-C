#include<stdio.h>
#include<string.h>

int solution(int number) {
	int cnt = 0;
	int n = number;
	while (1) {
		if (n < 10) {
			if (n == 2 || n == 3 || n == 5 || n == 7) cnt++;
			break;
		}
		else {
			if( n%10 == 2 || n%10 == 3 || n%10 == 5%10 || n%10 == 7) cnt++;
			n /= 10;
		}
	}
	
	return cnt;
}

int main() {
	int number = 29022531;
	int ret = solution(number);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
