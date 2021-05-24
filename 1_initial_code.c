// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* shirt_size[], int shirt_size_len) {
    // Write code here.
    int* answer = (int*)malloc(sizeof(int)*shirt_size_len);
    for (int i = 0; i < shirt_size_len; i++) {
        answer[i] = 0;
    }
    for (int i = 0; i < shirt_size_len; i++) {
        if (strcmp(shirt_size[i],"XS")==0) answer[0] += 1;
        else if (strcmp(shirt_size[i], "S") == 0) answer[1] += 1;
        else if (strcmp(shirt_size[i], "M") == 0) answer[2] += 1;
        else if (strcmp(shirt_size[i], "L") == 0) answer[3] += 1;
        else if (strcmp(shirt_size[i], "XL") == 0) answer[4] += 1;
        else if (strcmp(shirt_size[i], "XXL") == 0) answer[5] += 1;
    }
    return answer;
}

// The following is main function to output testcase.
int main() {
    char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
    int shirt_size_len = 6;
    int* ret = solution(shirt_size, shirt_size_len);

    // Press Run button to receive output.       
    printf("Solution: return value of the function is {");
    for (int i = 0; i < 6; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} .\n");
}