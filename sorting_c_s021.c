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
    int N = 0, M = 0;
    scanf("%d", &N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d", &M);
        int num[M];
        for(int j = 0 ; j < M ; j++){
            scanf("%d", &num[j]);
        }
        bubble(M, num);
        /*
        for(int j = 0 ; j < M ; j++){
            printf("%d\n", num[j]);
        }
         */
        int sum = 0;
        for(int k = 0 ; k < M/2 ; k++){
            sum += (num[M-1-k] - num[k]);
            //printf("%d = %d - %d\n", sum, num[M-1-i], num[i]);
        }
        printf("%d\n", sum);
    }
    return 0;
}
