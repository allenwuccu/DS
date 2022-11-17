#include <stdio.h>


int main() {
    int month=0, date=0;
    scanf("%d %d", &month, &date);
    if(month ==1){
        if(date<=20){
            printf("Capricorn\n");
        }
        else
            printf("Aquarius\n");
    }
    else if(month == 2){
        if(date<=18){
            printf("Aquarius\n");
        }
        else
            printf("Pisces\n");
    }
    else if(month == 3){
        if(date<=20){
            printf("Pisces\n");
        }
        else
            printf("Aries\n");
    }
    else if(month == 4){
        if(date<=20){
            printf("Aries\n");
        }
        else
            printf("Taurus\n");
    }
    else if(month == 5){
        if(date<=21){
            printf("Taurus\n");
        }
        else
            printf("Gemini\n");
    }
    else if(month == 6){
        if(date<=21){
            printf("Gemini\n");
        }
        else
            printf("Cancer\n");
    }
    else if(month == 7){
        if(date<=22){
            printf("Cancer\n");
        }
        else
            printf("Leo\n");
    }
    else if(month == 8){
        if(date<=23){
            printf("Leo\n");
        }
        else
            printf("Virgo\n");
    }
    else if(month == 9){
        if(date<=23){
            printf("Virgo\n");
        }
        else
            printf("Libra\n");
    }
    else if(month == 10){
        if(date<=23){
            printf("Libra\n");
        }
        else
            printf("Scorpio\n");
    }
    else if(month == 11){
        if(date<=22){
            printf("Scorpio\n");
        }
        else
            printf("Sagittarius\n");
    }
    else if(month == 12){
        if(date<=21){
            printf("Sagittarius\n");
        }
        else
            printf("Capricorn\n");
    }
    return 0;
}

