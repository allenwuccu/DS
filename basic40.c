#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char in[100];
    int num[10];
    int i = 0;
    char space[2] = " ";
    char *ptr, X;
    while(fgets(in, 99, stdin) != NULL){
        i = 0;
        ptr = strtok(in, space);
        while(ptr != NULL){
            sscanf(ptr, "%c", &X);
            if(X == 'X')
                num[i] = 10;
            else
                sscanf(ptr, "%d", &num[i]);
            i += 1;
            ptr = strtok(NULL, space);
        }
        for(int a= 0 ; a < 9 ; a++)
            num[a+1] += num[a];
        for(int a= 0 ; a < 9 ; a++)
            num[a+1] += num[a];
        if((num[9] % 11) == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
 }
