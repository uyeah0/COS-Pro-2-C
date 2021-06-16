#include<stdio.h>

char* solution(int arr[], int len) {

    int cntT = 0, cntF = 0;
    for (int i = 0; i < len; i++) {
        if (i % 3 == 0) cntT++;
        else if (i % 5 == 0) cntF++;
    }
    if (cntT > cntF) {
        return "three";
    }
    else if( cntT < cntF) {
        return "five";
    }
    else {
        return "same";
    }

}

int main() {
    int arr[10] = { 2, 3, 6, 9, 12, 15, 10, 20, 22, 25 };
    int arr_len = 10;
    char* ret = solution(arr, arr_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}