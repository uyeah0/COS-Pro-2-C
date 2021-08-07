#include<stdio.h>
#include<string.h>

int solution(int purchase[], int purchase_len) {
	int gift[] = { 1000000, 600000, 400000, 200000 };
	int price[] = { 50000, 30000, 20000, 10000 };
	int sum = 0;

	for (int i = 0; i < purchase_len; i++) {
		for (int j = 0; j < 4; j ++ ) {
			if (purchase[i] >= gift[j]) {
				sum += price[j]; break;
			}
		}
	}

	return sum;
}

int main() {
	int purchase[5] = { 150000, 210000, 399990, 990000, 1000000 };
	int purchase_len = 5;
	int ret = solution(purchase, purchase_len);

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}