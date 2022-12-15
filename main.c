
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int times[26];
    for(int i = 0 ; i < 26 ; i++){
        times[i] = 0;
    }
    while(gets(str) != NULL){
        int words = 1;
        
        for(int i = 0 ; i < strlen(str) ; i++){
            if(str[i] == 32)//空格
                words += 1;//字數+1
            else if(isupper(str[i])){//upper
                times[str[i] - 65] += 1;
            }
            else{//lower
                times[str[i] - 97] += 1;
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
