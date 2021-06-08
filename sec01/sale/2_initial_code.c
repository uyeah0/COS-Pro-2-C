#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char* grade) {
    // Write code here.
    int answer = 0;
    if (grade == "S") answer = price * 0.95;
    else if (grade == "G") answer = price * 0.9;
    else if(grade = "V")answer = price * 0.85;
    return answer;
}
