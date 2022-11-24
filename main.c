#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int f(int num){
    double flor = 0;
    if(num == 0 || num == 1){
        return (num + 1);
    }
    else{
        flor = floor(num/2);
        return f(num - 1) + f((int)flor);
    }
}

int main(void){
    int num = 0;
    int output = 0;
    scanf("%d", &num);
    output = f(num);
    printf("%d\n", output);
    return 0;
}


