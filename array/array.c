// #include<stdio.h>
// int main()
// {
//     int arr[20],size;
//     printf("enter the size -> ");
//     scanf("%d",&size);
//     for(int i = 0;i<size;i++)
//     {
//         printf("%d index -> ",i);
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0;i<size;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = size-1; i >= 0; i--)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size, sum = 0;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     printf("sum of -> %d\t", sum);
// }

//
// #include <stdio.h>
// int main()
// {
//     int arr[20], size, arr2[20];
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         arr2[i] = arr[i];
//     }
//     for (int  i = 0; i < size; i++)
//     {
//     printf("copy of number -> %d\n", arr2[i]);
//     }

// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size, check = 0;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 check++;
//             }
//         }
//     }
//     printf("dublicate number -> %d", check);
// }

//          NON DUPLICATE NUMBER PRINT

// #include<stdio.h>
// int main()
// {
//     int n;

//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d",&n);

//     int arr[n];

//     // Input elements in the array
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     // Loop through each element
//     printf("Non-duplicate elements are: ");
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         // Check if the current element is duplicated
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         // If the element appears only once, print it
//         if (count == 1)
//         {
//             printf("%d ",arr[i]);
//         }
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size, arr2[20], arr3[60], k = 0;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//         arr3[k] = arr[i];
//         k++;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr2[i]);
//         arr3[k] = arr2[i];
//         k++;
//     }
//     for (int i = 0; i < size; i++)          //output =   3 2 1 1 2 3
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr3[i] < arr3[j])
//             {
//                 int temp = arr3[i];
//                 arr3[i] = arr3[j];
//                 arr3[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < k; i++)
//         printf("%d\t", arr3[i]);
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size, arr2[20], arr3[60], k = 0, temp = 0;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the second array ->\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr2[i]);
//     }
//     // merging
//     for (int i = 0; i < size; i++)
//     {
//         arr3[k] = arr[i];
//         k++;
//     }
//     for (int j = 0; j < size; j++)
//     {
//         arr3[k] = arr2[j];
//         k++;
//     }
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = i + 1; j < k; j++)
//         {
//             if (arr3[i] < arr3[j])
//             {
//                 temp = arr3[i];
//                 arr3[i] = arr3[j];
//                 arr3[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         printf("%d\t", arr3[i]);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size, count = 0;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//                 printf("frequancy of number %d of times %d\n", arr[j], count);
//                 count = 0;
//             }
//         }
//     }
// }

//           SEARCHING
// #include <stdio.h>

// int main() {
//     int n, i, search, flag = 0;
//     int arr[100];

//     printf("Enter the number of elements in array: ");
//     scanf("%d", &n);

//     printf("Enter %d integers:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the element to search: ");
//     scanf("%d", &search);

//     // Searching the element
//     for(i = 0; i < n; i++) {
//         if(arr[i] == search) {
//             printf("Element found at position: %d\n", i);
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 0) {
//         printf("Element not found in the array.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size, max,min;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     max = arr[0];
//     min = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if(max<arr[i])
//         {
//             max = arr[i];
//         }
//         else if(min>arr[i])
//         {
//             min = arr[i];
//         }

//     }
//    printf("maximum number of = %d\n",max);
//    printf("minimum number of = %d",min);
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20], size, arr2[20],arr3[20];
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     int k = 0,h = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]%2==0)
//         {
//             arr2[k] = arr[i];
//             k++;
//         }
//         else
//         {
//             arr3[h] = arr[i];
//             h++;
//         }
//     }
//     for (int  i = 0; i < k; i++)
//     {
//     printf("even number -> %d\n", arr2[i]);
//     }
//     for (int  i = 0; i < h; i++)
//     {
//     printf("odd number -> %d\n", arr3[i]);
//     }

// }

//            ASCENDING ORDER
// #include <stdio.h>
// int main()
// {
//     int arr[20], size;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp;
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//      printf("ascending order -> ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

//       DESCENDING ORDER

// #include <stdio.h>
// int main()
// {
//     int arr[20], size;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 int temp;
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//      printf("deccending order -> ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

//    inserting number in array
// #include <stdio.h>
// int main()
// {
//     int arr[20], size;
//     int pos, insert_num;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the position -> ");
//     scanf("%d", &pos);
//     printf("enter the insert number -> ");
//     scanf("%d", &insert_num);
//     for (int i = size; i >= pos; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos - 1] = insert_num;
//     printf("inserting array -> ");
//     for (int i = 0; i <= size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

//         .....................
// #include <stdio.h>
// int main()
// {
//     int arr[20], size;
//     int pos, insert_num;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the insert number -> ");
//     scanf("%d", &insert_num);
//     for (int i = 0; i < size; i++)
//     {
//         if (insert_num < arr[i])
//         {
//             pos = i;
//             break;
//         }
//         else
//         {
//             pos = i + 1;
//         }
//     }

//     for (int i = size; i >= pos; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos] = insert_num;
//     printf("inserting array -> ");
//     for (int i = 0; i <= size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

//         DELETING ARRAY
// #include <stdio.h>
// int main()
// {
//     int arr[20], size;
//     int pos;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the deleting position -> ");
//     scanf("%d", &pos);
//     for (int i = pos - 1; i < size; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     printf("deleting array -> ");
//     for (int i = 0; i < size - 1; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

//        FIND THE SECOND LARGEST NUMBER AND SECOND MINIMUM NUMBER
// #include <stdio.h>
// int main()
// {
//     int arr[20], size, max, min, smax, smin;
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d index -> ", i);
//         scanf("%d", &arr[i]);
//     }
//     min = smax = max = arr[0];
//     smin = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//         else if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (smax < arr[i] && max != arr[i])
//         {
//             smax = arr[i];
//         }
//         else if (smin > arr[i] && min != arr[i])
//         {
//             smin = arr[i];
//         }
//     }

//     printf("second maximum number of = %d\n", smax);
//     printf("second minimum number of = %d", smin);
// }

//  2D ARRAY
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col;
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

//              TWO ARRAY SUM

// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, arr2[20][20], row2, col2, arr3[40][40];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("enter the row -> ");
//     scanf("%d", &row2);
//     printf("enter the coloum -> ");
//     scanf("%d", &col2);
//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             arr3[i][j] = arr[i][j] + arr2[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr3[i][j]);
//         }
//         printf("\n");
//     }
// }

//  subtract of two array
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, arr2[20][20], row2, col2, arr3[40][40];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("enter the row -> ");
//     scanf("%d", &row2);
//     printf("enter the coloum -> ");
//     scanf("%d", &col2);
//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             arr3[i][j] = arr[i][j] - arr2[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr3[i][j]);
//         }
//         printf("\n");
//     }
// }

//    multiply of two matrix
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, arr2[20][20], row2, col2, arr3[40][40];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("enter the row -> ");
//     scanf("%d", &row2);
//     printf("enter the coloum -> ");
//     scanf("%d", &col2);
//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             arr3[i][j] = 0;
//             for (int k = 0; k < col; k++)
//             {
//                 arr3[i][j] += arr[i][k] * arr2[k][j];
//             }
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr3[i][j]);
//         }
//         printf("\n");
//     }
// }

//     TRANSPOSE
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, arr2[20][20];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             arr2[j][i] = arr[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr2[i][j]);
//         }
//         printf("\n");
//     }
// }

//  sum of right digonal
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, sum = 0;
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//                 sum += arr[i][col - 1 - i];
//     }
//     printf("sum of right dignal -> %d",sum);
// }

// sum of left digonal     2x2
//  #include <stdio.h>
//  int main()
//  {
//      int arr[20][20], row, col, sum = 0;
//      printf("enter the row -> ");
//      scanf("%d", &row);
//      printf("enter the coloum -> ");
//      scanf("%d", &col);
//      for (int i = 0; i < row; i++)
//      {
//          for (int j = 0; j < col; j++)
//          {
//              printf("[%d] [%d] index -> ", i, j);
//              scanf("%d", &arr[i][j]);
//          }
//      }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = col-1; j >=0; j--)
//         {
//             if (i != j)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("sum of left dignoal -> %d",sum);
// }

//      SUM OF ROW AND COL

// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, rsum[20], csum[20];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         rsum[i] = 0;
//         for (int j = 0; j < col; j++)
//         {
//             rsum[i] += arr[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         csum[i] = 0;
//         for (int j = 0; j < col; j++)
//         {
//             csum[i] += arr[j][i];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("%d", rsum[i]);
//         printf("\n");
//     }
//     printf("\n");
//     for (int k = 0; k < col; k++)
//     {
//         printf("%d\t", csum[k]);
//     }
//     printf("\n");
// }

// //  LOWER TRIANGLE IS 0
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, rsum[20], csum[20];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (i > j)
//             {
//                arr[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

//  UPPER TRIANGLE IS 0
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, rsum[20], csum[20];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (i < j)
//             {
//                arr[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

//  middle TRIANGLE IS 1
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, rsum[20], csum[20];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (i == j)
//             {
//                arr[i][j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// LOWER AND UPPER TRIANGLE IS 0 AND MIDDLE IS 1

// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, rsum[20], csum[20];
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (i == j)
//             {
//                 arr[i][j] = 1;
//             }
//             else if (i > j)
//             {
//                 arr[i][j] = 0;
//             }
//             else if (i < j)
//             {
//                 arr[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

//  COMPARE 2 ARRAY
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col, arr2[20][20], row2, col2;
//     int flag = 1;
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("enter the row -> ");
//     scanf("%d", &row2);
//     printf("enter the coloum -> ");
//     scanf("%d", &col2);
//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     if (row == row2 && col == col2)
//     {
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 if (arr[i][j] != arr2[i][j])
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//     }
//     if (flag == 1)
//     {
//         printf("same");
//     }
//     else
//     {
//         printf("not same");
//     }
// }

// IDENTITY THE UNIT MATRIX
// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col;
//     int flag = 1;
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//         printf("[%d] [%d] index -> ", i, j);
//         scanf("%d", &arr[i][j]);
//     }
// }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if ((i == j && arr[i][j] == 1) || (i != j && arr[i][j] == 0))
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 0)
//         {
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("not a identity matrix");
//     }
//     else
//     {
//         printf("identity matrix");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int arr[20][20], row, col;
//     printf("enter the row -> ");
//     scanf("%d", &row);
//     printf("enter the coloum -> ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d] [%d] index -> ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i > j)
//             {
//                 printf("%d\t", 0);
//             }
//             else if (i == j)
//             {
//                 printf("%d\t", arr[i][j]);
//             }
//             else
//             {
//                 printf("%d\t", 1);
//             }
//         }
//         printf("\n");
//     }
// }

// sparse matrix

// #include <stdio.h>
// int main()
// {
//     int arr[20][20];
//     int row, col, countzero = 0, non_zero = 0;
//     printf("enter the row = ");
//     scanf("%d", &row);
//     printf("enter the col = ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d enter the value = ", i + 1);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == 0)
//             {
//                 countzero++;
//             }
//             else
//             {
//                 non_zero++;
//             }
//         }
//     }
//     if (countzero > non_zero)
//     {
//         printf("sparse matrix\n");
//     }
//     else
//     {
//         printf("not sparse matrix \n");
//     }
//     printf("non-zero value are \n");
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] != 0)
//             {
//                 printf("%d\t%d\t%d", i, j, arr[i][j]);
//                 printf("\n");
//             }
//         }
//     }
// }
