#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("enter the size = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the array = ");
        scanf("%d", &arr[i]);
    }
    printf("original array is = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("ascending order is = ");
    int j;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--) //   5 3 1 4 2
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}