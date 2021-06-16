#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int N, int M) {
    int answer = 0;
    for (int i = N; i <= M; i++) {
        if (i % 2 == 0) {
            answer += i*i;
        }
    }

    return answer;
}

int main() {
    int N = 4;
    int M = 7;
    int ret = solution(N, M);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}