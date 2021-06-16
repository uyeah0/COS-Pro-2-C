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

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);
}