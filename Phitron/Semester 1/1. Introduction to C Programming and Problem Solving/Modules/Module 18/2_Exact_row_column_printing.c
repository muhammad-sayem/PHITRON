#include<stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    /// For printing exact row ///

    int exact;              // Exact koto tomo row er value dekhte chai sheta input neyar jonno ///
    scanf("%d", &exact);

    for(i=0; i<col; i++){
        printf("%d ", a[exact][i]);
    }

    // For printing exact column ///

    /*
    int exact;              // Exact koto tomo column er value dekhte chai sheta input neyar jonno ///
    scanf("%d", &exact);

    for(i=0; i<row; i++){
        printf("%d ", a[i][exact]);
    }
    */
    
    return 0;
}