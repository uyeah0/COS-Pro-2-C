#include<stdio.h>
int solution(int scores[], int scores_len) {
    int max = scores[0]; 
    int min = 101;
    int sum = 0, result;
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] > max) max = scores[i];
        else if (scores[i] < min) min = scores[i];
    }
    if (max == min) return scores[0];
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] == max || scores[i] == min) continue;
        sum += scores[i];
    }
    result = sum / (scores_len - 2);
    return result;
}

int main() {
    int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
    int scores1_len = 10;
    int ret1 = solution(scores1, scores1_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[5] = { 1, 1, 1, 1, 1 };
    int scores2_len = 5;
    int ret2 = solution(scores2, scores2_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}