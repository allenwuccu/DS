#include <stdio.h>

int main() {
    int num=0;
    scanf("%d", &num);
    if(num==1){
        printf("NO\n");
        return 0;
    }
    else{
        for(int i = 2 ; i < num ; i++){
            if((num%i)==0){
                printf("NO\n");//表示有除了1和自己之外的因數
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}



