#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* func_a(int arr[], int arr_len) {
    int* counter = (int*)malloc(sizeof(int) * 1001);
    for (int i = 0; i < 1001; i++)
        counter[i] = 0;
    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++;
    return counter;
}

int func_b(int arr[], int arr_len) { // max±¸ÇÏ±â
    int ret = 0;
    for (int i = 0; i < arr_len; i++) {
        if (ret < arr[i])
            ret = arr[i];
    }
    return ret;
}

int func_c(int arr[], int arr_len) { // min±¸ÇÏ±â
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] != 0 && ret > arr[i])
            ret = arr[i];
    }
    return ret;
}

int solution(int arr[], int arr_len) {
    int* counter = func_a(arr, arr_len);
    int max_cnt = func_b(counter, arr_len);
    int min_cnt = func_c(counter, arr_len);
    return max_cnt / min_cnt;
}

// The following is main function to output testcase.
int main() {
    int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
    int arr_len = 10;
    int ret = solution(arr, arr_len);

    // Press Run button to receive output. 
    printf("Solution: return value of the function is %d .\n", ret);
}
