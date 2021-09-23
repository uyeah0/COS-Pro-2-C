#include<stdio.h>	

int* solution(char* schedule[], int schedule_len) {
    
    int cnt = 0;
    for (int i = 0; i < schedule_len; i++) {
        if (schedule[i] == "X") cnt++;
    }
    int* answer = (int*)malloc(sizeof(int) * cnt);
    for (int i = 0; i < cnt; i++) {
        answer[i] = 0;
    }
    cnt = 0;
    for (int i = 0; i < schedule_len; i++) {
        if (schedule[i] == "X") answer[cnt++] = i+1;
    }
    return answer;
}

int main() {
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
    int* ret = solution(schedule, 10);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]);
    printf(" �Դϴ�.");

}