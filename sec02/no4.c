#include<stdio.h>
char* solution(char* arr[], int arr_len) {
    int size = 0;
    for (int i = 0; i < arr_len; i++) {
        if (strlen(arr[i]) >= 5) {
            size += strlen(arr[i]);
        }
    }
    char* answer = (char*) malloc(sizeof(char)*size);
    for (int i = 0; i < size; i++) {
        answer[i] = "";
    }

    for (int i = 0; i < arr_len; i++) {
        if (strlen(arr[i]) >= 5) {
            answer += arr[i];
        }
    }

    if (answer[0] == "") answer = "empty";
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}