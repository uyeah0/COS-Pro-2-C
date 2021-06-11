#include<stdio.h>

int solution(int data[], int len) {
    int cnt = 0, sum = 0;
    double avg = 0;
    double dlen = len;
    for (int i = 0; i < len; i++) {
        sum += data[i];
    }
    avg = sum / dlen;
    for (int i = 0; i < len; i++) {
        if (data[i] < avg) cnt++;
    }

    return cnt;
}

int main() {
    int data1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int data_len1 = 10;
    int ret1 = solution(data1, data_len1);


    printf("Solution: return value of the function is %d .\n", ret1);

    int data2[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 10 };
    int data_len2 = 10;
    int ret2 = solution(data2, data_len2);

    printf("Solution: return value of the function is %d .\n", ret2);
}