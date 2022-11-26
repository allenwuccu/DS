#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void){
    int num = 0, temp = 0;
    scanf("%d", &num);
    int input[num];
    int sum[num];
    int temp1 = 0, temp2 = 0;
    for(int i = 0 ; i < num ; i++){
        scanf("%d", &input[i]);
        temp = input[i];
        sum[i]=0;
        while(temp>0){
            sum[i] += temp%10;
            temp = temp/10;
        }
    }
    //bubble
    for(int i = 0 ; i < num - 1 ; i++){
        for(int j = 0 ; j < num - i - 1 ; j++){
            if(sum[j] > sum[j+1]){
                temp1 = input[j];
                temp2 = sum[j];
                input[j] = input[j+1];
                sum[j] = sum[j+1];
                input[j+1] = temp1;
                sum[j+1] = temp2;
            }
            if(sum[j] == sum[j+1] && input[j] > input[j+1]){
                temp1 = input[j];
                //temp2 = list2[j];
                input[j] = input[j+1];
                //list2[j] = list2[j+1];
                input[j+1] = temp1;
                //list2[j+1] = temp2;
            }
        }
    }
    
    for(int i = 0 ; i < num ; i++){
        if(i < (num-1) )
            printf("%d ",input[i]);
        else
            printf("%d\n",input[i]);
    }
    return 0;
}


