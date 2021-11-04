#include<stdio.h>
int solution(int time_table[], int time_table_len) {
	int answer = 0;
	int first_time=0, last_time=0;

	for (int i = 0; i < time_table_len; i++) {
		if (time_table[i] == 1) {
			first_time = i; 
			break;
		}
	}
	for (int i = time_table_len; i >= 0; i--) {
		if (time_table[i] == 1) {
			last_time = i; 
			break;
		}
	}
	for (int i = first_time; i <= last_time; i++) {
		if (time_table[i] == 0) answer++;
	}
	return answer;
}


int main() {
	int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };
	int time_table_len = 10;
	int ret = solution(time_table, time_table_len);

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}