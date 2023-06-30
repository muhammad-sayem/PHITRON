#include<stdio.h>
int main()
{
    int row, col, i, j, cnt = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];

    if(row != col){
        printf("NOT PRIMARY UNIT DIAGONAL MATRIX\n");
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
                if(i == j) {
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

        if(flag == 0) printf("PRIMARY UNIT MATRIX\n");
        else printf("NOT PRIMARY UNIT MATRIX\n");
    }

    return 0;
}