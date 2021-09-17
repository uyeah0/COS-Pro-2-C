#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

char* solution(int tile_length) {
    char* answer = (char*)malloc(sizeof(char) * tile_length);
    answer[0] = 0;

    if (tile_length % 6 == 1 || tile_length % 6 == 2 || tile_length % 6 == 3)
    for (int i = 0; i < tile_length; i++) {
        strcat(answer, "RRR");
        i += 3;

    }


}

int main() {
    int tile_length1 = 11;
    char* ret1 = solution(tile_length1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    int tile_length2 = 16;
    char* ret2 = solution(tile_length2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}
    