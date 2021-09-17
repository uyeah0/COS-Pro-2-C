#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(char* words[], int words_len, char* word) {
    int cnt = 0;

    for (int i = 0; i < words_len; i++) {
        for (int j = 0; j < strlen(word); j++) {
            if (words[i][j] != word[j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    char* words[3] = { "CODE", "COED", "CDEO" };
    int words_len = 3;
    char* word = "CODE";
    int ret = solution(words, words_len, word);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
