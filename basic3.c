#include <stdio.h>
#include <math.h>

int main() {
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    int result = 0;
    result = pow(x,2) + pow(y,2);
    //printf("%d", result);
    if(result <= 10000){
        printf("inside\n");
    }
    else
        printf("outside\n");
    return 0;
}

