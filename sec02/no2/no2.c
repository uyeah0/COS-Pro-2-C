#include<stdio.h>

char* solution(int arr[], int len) {

    int cntT = 0, cntF = 0;
    for (int i = 0; i < len; i++) {
        if (i % 3 == 0) cntT++;
        else if (i % 5 == 0) cntF++;
    }
    if (cntT > cntF) {
        return "three";
    }
    else if( cntT < cntF) {
        return "five";
    }
    else {
        return "same";
    }

}

int main() {
    int arr[10] = { 2, 3, 6, 9, 12, 15, 10, 20, 22, 25 };
    int arr_len = 10;
    char* ret = solution(arr, arr_len);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret);
}