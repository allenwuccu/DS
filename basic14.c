#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char input[10001];
    int num = 0;
    bool hi = 1;
    char *ptr1;
    char *ptr2;
    scanf("%s", input);
    num = strlen(input) -1;
    ptr1 = &input[0];
    ptr2 = &input[num];
    for(int i = 0 ; i <= num ; i++){
        if(*ptr1 != *ptr2){
            hi = 0;
            break;
        }
        *(ptr1++);
        *(ptr2--);
    }
    if(hi == 0)
        printf("NO\n");
    if(hi == 1)
        printf("YES\n");
    return 0;
}



