#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num = 0;
    while(scanf("%d",&num) != EOF){
        int s[num], d[num];//s:出發，d:返回
        int car = num;
        for(int i = 0 ; i < num ; i++){
            scanf("%d", &s[i]);
            scanf("%d", &d[i]);
        }
        //bubble sort
        int temp = 0;
        for(int i = 0 ; i < num - 1 ; i++){
            for(int j = 0 ; j < num - 1 ; j++){
                if(s[j] > s[j+1]){
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                    temp = d[j];
                    d[j] = d[j+1];
                    d[j+1] = temp;
                }
            }
        }
        //來得及回來跑下一躺，少一台車
        for(int k = 0 ; k < num ; k++){
            for(int j = k+1 ; j < num ; j++){
                if(d[k] <= s[j]){
                    car--;
                    s[j]=0;
                    break;
                }
            }
        }
        printf("%d\n",car);
    }
}
