#include<stdio.h>
int main()
{
    int row, col, i, j, cnt = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) cnt++;
        }
    }

    if(cnt == row*col) printf("ZERO MATRIX\n");
    else printf("N0T ZERO MATRIX\n");
    
    return 0;
}

// ----------------------------------------------------------------------------- //

/*
#include<stdio.h>
int main()
{
    int row, col, i, j, flag = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] != 0){
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0) printf("ZERO MATRIX\n");
    else printf("N0T ZERO MATRIX\n");
    
    return 0;
}
*/