#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money) {
    int answer = 0;
    
    for(int i =0; i < price_len; i++){
        answer += price[i];
    }
    if(money < answer){
        answer = -1;
    }else {
        answer = money-answer;
    }
    
    return answer;
}