#include <stdio.h>

int main() {
    int row=0, col=0;
    
        scanf("%d %d", &row, &col);
        int temp = row;
        row = col;
        col = temp;
        int in[row][col];
        for(int i = 0 ; i < col ; i++){
            for(int j = 0 ; j < row ; j++){
                scanf("%d", &in[j][i]);
            }
        }
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(j != (col-1))
                    printf("%d ", in[i][j]);
                if(j == (col-1))
                    printf("%d", in[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}



