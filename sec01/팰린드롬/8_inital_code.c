#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(char* sentence) {
    char* str = (char*)malloc(sizeof(char) * 103);
    int len = 0;
    for (int i = 0; i < strlen(sentence); i++) {
        char ch = sentence[i];
        if (ch != ' ' && ch != '.') str[len++] = ch;
    }
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) return false;
    }
    return true;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    char sentence1[19] = "never odd or even.";
    bool ret1 = solution(sentence1);

    // Press Run button to receive output.
    printf("Solution: return value of the function is %s .\n", ret1 == true ? "true" : "false");


    char sentence2[19] = "palindrome";
    bool ret2 = solution(sentence2);

    // Press Run button to receive output.
    printf("sSolution: return value of the function is %s .\n", ret2 == true ? "true" : "false");
}