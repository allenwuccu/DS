#include <stdio.h>

int main() {
    float input[10];
    for(int i = 0 ; i < 10 ; i++){
        scanf("%f", &input[i]);
    }
    float max = input[0];
    for(int i = 1 ; i < 10 ;i++){
        if(input[i] > max){
            max = input[i];
        }
    }
    float min = input[0];
    for(int i = 1 ; i < 10 ;i++){
        if(input[i] < min){
            min = input[i];
        }
    }
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
    return 0;
}
