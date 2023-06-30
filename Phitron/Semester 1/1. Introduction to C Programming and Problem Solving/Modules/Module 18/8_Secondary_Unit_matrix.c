#include<stdio.h>
int main()
{
    int row, col, i, j, cnt = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];

    if(row != col){
        printf("NOT SECONDARY UNIT DIAGONAL MATRIX\n");
        return 0;
    }

    else{
        int flag = 0;
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                scanf("%d", &a[i][j]);
            }
        }

        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                if(i+j == row-1) {
                    if(a[i][j] != 1){
                        flag = 1;
                        break;
                    }
                }
                else{
                    if(a[i][j] != 0){
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(flag == 0) printf("SECONDARY UNIT MATRIX\n");
        else printf("NOT SECONDARY UNIT MATRIX\n");
    }

    return 0;
}