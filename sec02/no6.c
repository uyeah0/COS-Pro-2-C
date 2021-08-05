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

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}