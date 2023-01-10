
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    while(gets(str) != NULL){
        int words = 1;
        int times[26];
        for(int i = 0 ; i < 26 ; i++){
            times[i] = 0;
        }
        for(int i = 0 ; i < strlen(str) ; i++){
            if(str[i] == 32)//空格
                words += 1;//字數+1
            else if(islower(str[i])){//lower
                times[str[i] - 97] += 1;
            }
            else{//upper
                times[str[i] - 65] += 1;
            }
        }
        
        //output
        printf("%d\n",words);
        for(int i = 0 ; i < 26 ; i++){
            if(times[i] != 0){
                printf("%c : %d\n", (i+97), times[i]);
            }
        }
    }
 }
