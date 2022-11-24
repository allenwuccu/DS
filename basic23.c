#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>



int main(void){
    int money = 0, a1 = 0, a2 = 0, a3 = 0;
    int fif = 0, fiv = 0, one = 0;
    scanf("%d,%d,%d,%d", &money, &a1, &a2, &a3);
    if((a1*15 + a2*20 + a3*30) > money){
        printf("0\n");
        return 0;
    }
    else{
        money = money - (a1*15 + a2*20 + a3*30);
        fif = money/50;
        money = money - fif*50;
        fiv = money/5;
        money = money - fiv*5;
        one = money;
    }
    printf("%d,%d,%d\n", one, fiv, fif);
    return 0;
}


