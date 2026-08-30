#include <stdio.h>
int main()
{
    int arr[20][20];
    int row, col, countzero = 0, non_zero = 0;
    printf("enter the row = ");
    scanf("%d", &row);
    printf("enter the col = ");
    scanf("%d", &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d %d enter the value = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                countzero++;
            }
            else
            {
                non_zero++;
            }
        }
    }
    if (countzero > non_zero)
    {
        printf("sparse matrix\n");
    }
    else
    {
        printf("not sparse matrix \n");
    }
    printf("non-zero value are \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != 0)
            {
                printf("%d\t%d\t%d", i, j, arr[i][j]);
                printf("\n");
            }
        }
    }
}
