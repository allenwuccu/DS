#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char input[1000], *token;
    while(fgets(input, 999, stdin) != NULL){//持續輸入
        int i = 0, in[999];
        char space[2] = " ";
        token = strtok(input, space);//以空格切開
        while(token != NULL){
            sscanf(token, "%d", &in[i]);
            token = strtok(NULL, space);
            i += 1;
        }
        float sum = 0;
        for(int a = 0 ; a < i ; a++){
            sum += in[a];
        }
        printf("Size: %d\n", i);
        printf("Average: %.3f\n", sum/i);
    }
    return 0;
 }
