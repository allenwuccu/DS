#include <stdio.h>


int main() {
    int input = 0;
    scanf("%d", &input);
    if(input<0){
        input = input +256;
    }
    int output[8];
    for(int i = 0 ; i < 8 ; i++)
        output[i]=0;
    for(int i = 7 ; i >= 0 ; i--){
        output[i] = input%2;
        input = input/2;
    }
    for(int i = 0 ; i < 8 ; i++)
        printf("%d", output[i]);
    printf("\n");
    return 0;
}

