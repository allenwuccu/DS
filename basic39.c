
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    int num = 0, listen = 0, read = 0, speak = 0;
    scanf("%d", &num);
    for(int i = 0 ; i < num ; i++){
        scanf("%d %d %d", &listen, &read, &speak);
        if(listen >= 60 && read >= 60 && speak >= 60){
            printf("P\n");
            continue;
        }
        if(listen <= 59 && read > 59 && speak > 59){
            if((listen + read + speak) >= 220){
                printf("P\n");
                continue;
            }
            else{
                printf("M\n");
                continue;
            }
        }
        if(listen > 59 && read <= 59 && speak > 59){
            if((listen + read + speak) >= 220){
                printf("P\n");
                continue;
            }
            else{
                printf("M\n");
                continue;
            }
        }
        if(listen > 59 && read > 59 && speak <= 59){
            if((listen + read + speak) >= 220){
                printf("P\n");
                continue;
            }
            else{
                printf("M\n");
                continue;
            }
        }
        if(listen <= 59 && read <= 59){
            if(speak >= 80){
                printf("M\n");
                continue;
            }
            else{
                printf("F\n");
                continue;
            }
        }
        if(read <= 59 && speak <= 59){
            if(listen >= 80){
                printf("M\n");
                continue;
            }
            else{
                printf("F\n");
                continue;
            }
        }
        if(listen <= 59 && speak <= 59){
            if(read >= 80){
                printf("M\n");
                continue;
            }
            else{
                printf("F\n");
                continue;
            }
        }
    }
 }
