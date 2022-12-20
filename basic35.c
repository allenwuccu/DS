#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int main(){
    int n = 0;
    while(scanf("%d",&n) != EOF){
        for(int i = 0 ; i < n ; i++){
            int T = 0, m = 0, k = 0;
            scanf("%d", &T);
            scanf("%d", &m);
            scanf("%d", &k);
            int price[k];
            for(int j = 0 ; j < k ; j++){
                scanf("%d", &price[j]);
            }
            bubble(k, price);//價錢由小排列到大
            int sum = 0;
            for(int j = 0 ; j < m ; j++){
                sum += price[j];//買m個不一樣禮物的價錢總和
            }
            if(sum <= T)//價錢總和<預算
                printf("%d\n", sum);
            else
                printf("Impossible\n");
        }
    }
    return 0;
 }
