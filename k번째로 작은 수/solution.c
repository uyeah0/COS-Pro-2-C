#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len은 2차원 배열 arr의 행(세로) 길이입니다.
// arr_col_len은 2차원 배열 arr의 열(가로) 길이입니다.
// arr[i][j]는 arr의 i번째 행의 j번째 열에 저장된 값을 의미합니다.
int solution(int** arr, int arr_row_len, int arr_col_len, int k) {
    int answer = 0;
    int min = arr[0][0];
    int cnt=0;
    
    while(cnt < k){
        for(int i =0; i < arr_row_len; i++){ // min구하기
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