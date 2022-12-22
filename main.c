#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void bubble_A(int num, int list[]){
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
void bubble_D(int num, int list[]){
    int temp = 0;
    for(int i = 0 ; i < num - 1 ; i++){
        for(int j = 0 ; j < num - 1 ; j++){
            if(list[j] < list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n = 0, p = 0;
    char order;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &p);
        int num[p];
        for(int j = 0 ; j < p ; j++){
            scanf("%d", &num[j]);
        }
        scanf(" %c", &order);
        //putchar(order);
        if(order == 'A'){
            bubble_A(p, num);
        }
        if(order == 'D'){
            bubble_D(p, num);
        }
        for(int k = 0 ; k < p ; k++){
            if(k == p-1){
                printf("%d\n", num[k]);
                break;
            }
            printf("%d ", num[k]);
        }
    }
    return 0;
}
