#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    int year = 0;
    scanf("%d", &year);
    bool bissextile = 0;
    if((year % 4) == 0)
        bissextile = 1;
    if(bissextile == 1){
        if((year % 100) == 0)
            bissextile = 0;
        if((year % 400) == 0)
            bissextile = 1;
    }
    if(bissextile == 1){
        printf("Bissextile Year\n");
    }
    if(bissextile == 0){
        printf("Common Year\n");
    }
    return 0;
}



