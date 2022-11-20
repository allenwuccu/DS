#include <stdio.h>

int main() {
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    if(a == b){
        printf("%d\n", a);
    }
    while(a > 0 && b > 0){
        if(a > b){
            a %= b;
        }
        else if(b > a){
            b %= a;
        }
    }
    if(a == 0){
        printf("%d\n", b);
    }
    if(b == 0){
        printf("%d\n", a);
    }
    return 0;
}



