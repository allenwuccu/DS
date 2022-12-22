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
    scanf("%d", &num);
    int value[num];
    for(int i = 0 ; i < num ; i++){
        scanf("%d", &value[i]);
    }
    bubble(num, value);
    for(int i = 0 ; i < num ; i++){
        if(i == num-1){
            printf("%d\n", value[i]);
            break;
        }
        printf("%d ", value[i]);
    }
    return 0;
}
