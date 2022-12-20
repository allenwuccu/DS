#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char input[120], *token;
    char space[2] = " ";
    int in[100], num[100];
    for(int j = 0 ; j < 100 ; j++){
        in[j] = 0;
        num[j] = 0;
    }
    while(fgets(input, 99, stdin) != NULL){
        int i = 0;
        token = strtok(input, space);
        while(token != NULL){//input
            sscanf(token, "%d", &in[i]);
            num[i] = 1;
            token = strtok(NULL, space);
            i++;
        }
        for(int k = 0 ; k < i ; k++){//相同數字，頻率+1
            if(num[k] > 0){
                for(int l = k+1 ; l < i ; l++){
                    if(in[k] == in[l] && num[l] > 0){
                        num[k] = num[k] + 1;
                        num[l] = 0;
                    }
                }
            }
        }
        int max = 0, max_num = 0;
        for(int k = 0 ; k < i ; k++){//找最大頻率
            if(num[k] > max_num){
                max_num = num[k];
                max = in[k];
            }
        }
        if( ((i)/2) < max_num){
            printf("%d\n", max);
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
 }

