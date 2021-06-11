#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int arr[], int arr_len){
    int count = 0;
    for(int i = 0; i < arr_len; ++i)
        if (arr[i] % 5 == 0)
            count += 1;
    return count;
}

char* func_b(int three, int five){
    if (three > five)
        return "three";
    else if (three < five)
        return "five";
    else
        return "same";
}

int func_c(int arr[], arr_len){
    int count = 0;
    for(int i = 0; i < arr_len; ++i)
        if (arr[i] % 3 == 0)
            count += 1;
    return count;
}

char* solution(int arr[], int arr_len) {
    int count_three = func_@@@(@@@);
    int count_five = func_@@@(@@@);
    char* answer = func_@@@(@@@);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int arr[10] = {2, 3, 6, 9, 12, 15, 10, 20, 22, 25};
    int arr_len = 10;
    char* ret = solution(arr, arr_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}