#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int member_age[], int member_age_len, char* transprotations) {
    int adultCnt =0, childCnt = 0;
    int  fee = 0;
    if (strcmp(transprotations, "Bus") == 0) {
        for (int i = 0; i < member_age_len; i++) {
            if (member_age[i] < 20) childCnt++;
            else adultCnt++;
        }
        if (member_age_len >= 10) {
            fee += (childCnt * 15000)*0.8;
            fee += (adultCnt * 40000)*0.9;
        }
        else {
            fee += childCnt * 15000;
            fee += adultCnt * 40000;
        }
    }
    else if (strcmp(transprotations, "Ship") == 0) {
        for (int i = 0; i < member_age_len; i++) {
            if (member_age[i] < 20) childCnt++;
            else adultCnt++;
        }
        if (member_age_len >= 10) {
            fee += (childCnt * 13000) * 0.8;
            fee += (adultCnt * 30000) * 0.9;
        }
        else {
            fee += childCnt * 13000;
            fee += adultCnt * 30000;
        }
    }
    if (strcmp(transprotations, "Airplane") == 0) {
        for (int i = 0; i < member_age_len; i++) {
            if (member_age[i] < 20) childCnt++;
            else adultCnt++;
        }
        if (member_age_len >= 10) {
            fee += (childCnt * 45000) * 0.8;
            fee += (adultCnt * 70000) * 0.9;
        }
        else {
            fee += childCnt * 45000;
            fee += adultCnt * 70000;
        }
    }
    return fee;
}

int main() {
    int member_age1[5] = { 13, 33, 45, 11, 20 };
    int member_age1_len = 5;
    char* transportations1 = "Bus";
    int ret1 = solution(member_age1, member_age1_len, transportations1);
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int member_age2[10] = { 25, 11, 27, 56, 7, 19, 52, 31, 77, 8 };
    int member_age2_len = 10;
    char* transportations2 = "Ship";
    int ret2 = solution(member_age2, member_age2_len, transportations2);
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
