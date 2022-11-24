#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void){
    int height = 0, gender = 0;
    float weight = 0;
    while(scanf("%d %d", &height, &gender) != EOF){
        if(gender == 1){
            weight = (height - 80) * 0.7;
            printf("%.1f\n", weight);
        }
        if(gender == 2){
            weight = (height - 70) * 0.6;
            printf("%.1f\n", weight);
        }
    }
    return 0;
}


