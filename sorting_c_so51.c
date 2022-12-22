#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void bubble(int num, int list[]){
    int temp = 0;
    for(int i = 0 ; i < num - 1 ; i++){
        for(int j = 0 ; j < num - 1 ; j++){
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
int main()
{
    int num = 0;
    int work[1000];
    scanf("%d", &num);
    for(int i = 0 ; i < num ; i++){
        scanf("%d", &work[i]);
    }
    bubble(num, work);
    /*
    for(int i = 0 ; i < num ; i++){
        printf("%d\n", work[i]);
    }
     */
    int wait = 0, j = 0;
    for(int i = 0 ; i < num-1 ; i++){
        j += work[i];
        wait += j;
    }
    printf("%d\n", wait);
    return 0;
}
