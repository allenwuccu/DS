
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    int ans = 0, guess = 0;
    scanf("%d", &ans);
    int ans_[4];
    for(int i = 3 ; i >= 0 ; i--){
        ans_[i] = (ans % 10);
        ans /= 10;
    }
    while(1){
        scanf("%d", &guess);
        int guess_[4];
        for(int i = 3 ; i >= 0 ; i--){
            guess_[i] = (guess % 10);
            guess /= 10;
        }
        if(guess_[0] == 0 && guess_[0] == guess_[1] && guess_[1] == guess_[2] && guess_[2] == guess_[3] && guess_[0] == guess_[3]){
            return 0;
        }
        int a = 0, b = 0;
        for(int i = 0 ; i < 4 ; i++){
            for(int j = 0 ; j < 4 ; j++){
                if(guess_[i] == ans_[j] && i == j){//數值和位置跟答案完全相同
                    a++;
                }
                else if(guess_[i] == ans_[j] && i != j){//數值跟答案相同但位置不一樣
                    b++;
                }
            }
        }
        printf("%dA%dB\n",a,b);
    }
 }
