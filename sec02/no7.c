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

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}