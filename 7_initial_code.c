#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
    int count = 0;
    for (int i = 0; i < scores_len; i++)
        if (650 <= scores[i] || scores[i] < 800)
            count += 1;
    return count;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
    int scores_len = 10;
    int ret = solution(scores, scores_len);

    // Press Run button to receive output.
    printf("Solution: return value of the function is %d .\n", ret);
}