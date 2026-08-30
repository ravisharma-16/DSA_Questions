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
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

