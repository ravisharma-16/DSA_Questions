// #include <stdio.h>
// #include <stdlib.h>

// void merge(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     int *left = (int *)malloc(len1 * sizeof(int));
//     int *right = (int *)malloc(len2 * sizeof(int));

//     for (int i = 0; i < len1; i++)
//     {
//         left[i] = arr[start + i];
//     }
//     for (int i = 0; i < len2; i++)
//     {
//         right[i] = arr[mid + 1 + i];
//     }

//     int i = 0, j = 0, k = start;
//     while (i < len1 && j < len2)
//     {
//         if (left[i] <= right[j])
//         {
//             arr[k++] = left[i++];
//         }
//         else
//         {
//             arr[k++] = right[j++];
//         }
//     }
//     while (i < len1)
//     {
//         arr[k++] = left[i++];
//     }
//     while (j < len2)
//     {
//         arr[k++] = right[j++];
//     }

//     free(left);
//     free(right);
// }

// void mergeSort(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int mid = start + (end - start) / 2;
//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid + 1, end);
//     merge(arr, start, end);
// }

// int main()
// {
//     int size, arr[20];
//     printf("Enter the number of elements: ");
//     scanf("%d", &size);

//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter element at index %d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Original array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     mergeSort(arr, 0, size - 1);

//     printf("Sorted array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


