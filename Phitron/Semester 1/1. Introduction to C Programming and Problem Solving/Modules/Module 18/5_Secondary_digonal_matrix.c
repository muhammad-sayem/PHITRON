#include<stdio.h>
int main()
{
    int row, col, i, j, cnt = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];

    if(row != col){
        printf("NOT SECONDARY DIAGONAL MATRIX");
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
                if(i+j == row-1) continue;          /// col-1 dileo hobe karon row col er size same ///
                else{
                    if(a[i][j] != 0){
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(flag == 0) printf("SECONDARY DIAGONAL MATRIX\n");
        else printf("NOT SECONDARY DIAGONAL MATRIX\n");

    }

    return 0;
}

// ------------------------------------------------------------------ //
/*
#include<stdio.h>
int main()
{
    int row, col, i, j, cnt = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];

    if(row == col){
        int flag = 0;
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                scanf("%d", &a[i][j]);
            }
        }

        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                if(i == j) continue;
                else{
                    if(a[i][j] != 0){
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(flag == 0) printf("SECONDARY DIAGONAL MATRIX\n");
        else printf("NOT SECONDARY DIAGONAL MATRIX\n");
    }

    else{
        printf("NOT SECONDARY DIAGONAL MATRIX");
    }

    return 0;
}
*/

// ----------------------------------------------------------------- //

// Phitron's code //
/*
#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if(row != col) 
    {
        flag=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                continue;;
            }
            if(a[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        printf("Primary Diagonal\n");
    }
    else 
    {
        printf("Not Diagonal\n");
    }
    return 0;
}
*/