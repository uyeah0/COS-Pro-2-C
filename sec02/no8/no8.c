#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number) {
    int cnt = 0;
    int n = number;
    while (n>0) {
        if (n%10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7) cnt++;
        n /= 10;
    }
    return cnt;
}
int main() {
    int number = 29022531;
    int ret = solution(number);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
