#include<stdio.h>
#include<stdlib.h>

int rank(int scores[], int scores_len, int nScore) {
	int rank = 1;
	for (int i = 0; i < scores_len; i++) {
		if (scores[i] == nScore) {
			break;
		}
		else {
			rank++;
		}
	}
	return rank;
}

int* sort(int scores[], int scores_len) {
	int* sArr = (int*)malloc(sizeof(int) * scores_len);
	sArr[0] = 0;
	for (int i = 0; i < scores_len - 1; i++) {
		for (int j = i + 1; j < scores_len; j++) {
			if (scores[i] < scores[j]) {
				int temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}
		}
	}
	return sArr;
}

int solution(int scores[], int scores_len, int n) {
	int nScore = scores[n];
	int* sArr = sort(scores, scores_len);
	int answer = rank(scores, scores_len, nScore);
	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	int scores[4] = { 20, 60, 98, 59 };
	int scores_len = 4;
	int n = 3;
	int ret = solution(scores, scores_len, n);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}