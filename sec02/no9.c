#include<stdio.h>
#include<string.h>

int solution(int votes[], int votes_len, int N, int K) {
	int arr[10] = {0,};
	int cnt = 0;
	for (int i = 0; i < votes_len; i++) {
		arr[votes[i]]++;
	}
	for (int i = 0; i < 10; i++) {
		if (K == arr[i]) cnt++;
	}

	return cnt;
}

int main() {
	int votes[10] = { 2, 5, 3, 4, 1, 5, 1, 5, 5, 3 };
	int votes_len = 10;
	int N = 5;
	int K = 2;
	int ret = solution(votes, votes_len, N, K);

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}