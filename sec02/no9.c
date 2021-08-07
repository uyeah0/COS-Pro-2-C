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

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}