#include <stdio.h>

int main() {
    int pow=0;
    float s=0, ns=0;
    scanf("%d", &pow);
    //int temp = pow;
    if(pow <= 120){
        s = 2.1 * pow;
        ns = 2.1 * pow;
    }
    else if(pow >= 121 && pow <= 330){
        s = 252 + 3.02 * (pow - 120);
        ns = 252 + 2.68 * (pow - 120);
    }
    else if(pow >= 331 && pow <= 500){
        s = 886.2 + 4.39 * (pow - 330);
        ns = 814.8 + 3.61 * (pow - 330);
    }
    else if(pow >= 501 && pow <= 700){
        s = 1632.5 + 4.97 * (pow - 500);
        ns = 1428.5 + 4.01 * (pow - 500);
    }
    else {
        s = 2626.5 + 5.63 * (pow - 700);
        ns = 2230.5 + 4.50 * (pow - 700);
    }
    printf("Summer months:%.2f\n", s);
    printf("Non-Summer months:%.2f\n", ns);
    return 0;
}



