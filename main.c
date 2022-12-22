#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void bubble(int num, float list[]){
    float temp = 0;
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
    
    int N = 0;
    scanf("%d", &N);
    float num[N];
    for(int i = 0 ; i < N ; i++){
        scanf("%f", &num[i]);
    }
    bubble(N, num);
    printf("%.2f\n", num[N-1]);
    printf("%.2f\n", num[0]);
    return 0;
}
