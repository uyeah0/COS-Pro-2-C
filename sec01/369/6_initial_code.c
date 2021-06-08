#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        int current = i;
        int temp = count;
        while (current != 0) {
            if ( current % 10 ==3|| current%10==6 || current %10== 9) {
                count++;
                printf("pair");
            }
            current /= 10;
        }
        if (temp == count)
            printf("%d", i);
        printf(" ");
    }
    printf("\n");
    return count;
}


// The following is main function to output testcase.
int main() {
    int number = 40;
    int ret = solution(number);

    // Press Run button to receive output.
    printf("Solution: return value of the function is %d .\n", ret);
}
