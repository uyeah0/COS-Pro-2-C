#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len�� 2���� �迭 arr�� ��(����) �����Դϴ�.
// arr_col_len�� 2���� �迭 arr�� ��(����) �����Դϴ�.
// arr[i][j]�� arr�� i��° ���� j��° ���� ����� ���� �ǹ��մϴ�.
int solution(int** arr, int arr_row_len, int arr_col_len, int k) {
    int answer = 0;
    int min = arr[0][0];
    int cnt=0;
    
    while(cnt < k){
        for(int i =0; i < arr_row_len; i++){ // min���ϱ�
            for(int j =0; j < arr_col_len; j++){
                if(min > arr[i][j] && arr[i][j] !=0) {
                    min = arr[i][j];
                }  
            }
            
        }
        for(int i =0; i < arr_row_len; i++){
            for(int j =0; j < arr_col_len; j++){
                    if(min == arr[i][j]) {
                        arr[i][j] = 0;
                        answer = min;
                        cnt++;
                        min = 1001;
                        break;
                    }  
                }    
        }    
        
    }
    
    
    return answer;
}