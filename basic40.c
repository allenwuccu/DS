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
            if(X == '0')
                num[i] = 0;
            if(X == '1')
                num[i] = 1;
            if(X == '2')
                num[i] = 2;
            if(X == '3')
                num[i] = 3;
            if(X == '4')
                num[i] = 4;
            if(X == '5')
                num[i] = 5;
            if(X == '6')
                num[i] = 6;
            if(X == '7')
                num[i] = 7;
            if(X == '8')
                num[i] = 8;
            if(X == '9')
                num[i] = 9;
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
