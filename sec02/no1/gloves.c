#include<stdio.h>

int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
    int* arrL = (int*)malloc(sizeof(int) * (left_gloves_len+1));
    int* arrR = (int*)malloc(sizeof(int) * (right_gloves_len+1));

    for (int i = 0; i < left_gloves_len; i++) {
        arrL[i]=0;
    }

    for (int i = 0; i < right_gloves_len; i++) {
        arrR[i] = 0;
    }

    for (int i = 0; i < left_gloves_len; i++) {
        arrL[left_gloves[i]]++;
    }

    for (int i = 0; i < right_gloves_len; i++) {
        arrR[right_gloves[i]]++;
    }
    int result = 0;
    int m = left_gloves_len;
    if (left_gloves_len > right_gloves_len) {
        m = right_gloves_len;
    }
    for (int i = 0; i < m; i++) {
        if (left_gloves[i] != 0 && right_gloves[i] != 0) {
            if (left_gloves[i] < right_gloves[i]) result += left_gloves[i];
            else if (left_gloves[i] > right_gloves[i]) result += right_gloves[i];
            else result += left_gloves[i];
        }
    }
    return m;
}

int main() {
    int left_gloves[5] = { 2, 1, 2, 2, 4 };
    int left_gloves_len = 5;
    int right_gloves[6] = { 1, 2, 2, 4, 4, 7 };
    int right_gloves_len = 6;
    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
