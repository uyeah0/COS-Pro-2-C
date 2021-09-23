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

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]);
    printf(" 입니다.");

}