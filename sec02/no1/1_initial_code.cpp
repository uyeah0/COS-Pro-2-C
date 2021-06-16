#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int max_product_number = 10;

int* func_a(int gloves[], int gloves_len) {
    int* counter = (int*)malloc(sizeof(int) * (max_product_number + 1));
    for (int i = 0; i <= max_product_number; ++i)
        counter[i] = 0;

    for (int i = 0; i < gloves_len; ++i)
        counter[gloves[i]]++;
        return counter;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
    int* left_counter = func_a(left_gloves, left_gloves_len);
    int* right_counter = func_a(right_gloves, right_gloves_len);
    int total = 0;
    for (int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int left_gloves[5] = { 2, 1, 2, 2, 4 };
    int left_gloves_len = 5;
    int right_gloves[6] = { 1, 2, 2, 4, 4, 7 };
    int right_gloves_len = 6;
    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}