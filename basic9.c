#include <stdio.h>

int main() {
    int num=0;
    scanf("%d", &num);
    int result=0;
    for(int i = 1 ; i <= num ; i++){
        if((i%3)==0){
            result += i;
        }
    }
    printf("%d\n", result);
    return 0;
}



