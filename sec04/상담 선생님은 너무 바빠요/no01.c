#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int* solution(char* schedule[], int schedule_len) {
	int x_count = 0;

	for (int i = 0; i < schedule_len; i++) {
		if(schedule[i] == "X") x_count++;
	}
	int* answer = (int*)malloc(sizeof(int) * x_count);
	answer[0] = 0;
	
	int cnt = 0;
	for (int i = 0; i < schedule_len; i++) {
		if (schedule[i] == "X") {
			answer[cnt++] = i + 1;
		}
	}
	return answer;
}

int main() {
	char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
	int* ret = solution(schedule, 10);

	printf("solution ÇÔ¼öÀÇ ¹ÝÈ¯ °ªÀº ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", ret[i]);
	}
	printf("ÀÔ´Ï´Ù\n");
	return 0;
}
