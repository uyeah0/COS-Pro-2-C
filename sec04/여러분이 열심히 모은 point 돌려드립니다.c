#include<stdio.h>
#include<stdbool.h>

int solution(int point) {
	if (point < 1000) {
		return 0;
	}
	int answer = point / 100 * 100;
	return answer;
}

int main() {
	int point = 2323;
	int ret = solution(point);

	printf("solution �Լ��� ���� ���� %d�Դϴ�", ret);
}