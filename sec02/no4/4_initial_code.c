// ������ ���� include�� ����� �� �ֽ��ϴ�.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(char* words[], int words_len) {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    // ��ȯ�ϴ� ���ڿ��� malloc�� �̿��� �ּ���.
    char* answer = "";
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