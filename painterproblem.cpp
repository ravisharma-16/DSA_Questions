// #include <iostream>
// using namespace std;
// int sum(int arr[],int size)
// {
//      int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int findWalls(int arr[], int size, int painters)
// {
//     if (size < painters)
//     {
//         return -1;
//     }
//     int start = 0;
//     int end = sum(arr,size);
//     int result = end;
//     while (start <= end)
//     {
//         int mid = (start+ end) / 2;
//         int k = 1;
//         int currentWalls = 0;
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[i] > mid)
//             {
//                 k = painters + 1;
//             }

//             if (currentWalls + arr[i] > mid)
//             {
//                 k++;
//                 currentWalls = arr[i];

//                 if (k > painters)
//                 {
//                     break;
//                 }
//             }
//             else
//             {
//                 currentWalls += arr[i];
//             }
//         }

//         if (k <= painters)
//         {
//             result = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return result;
// }

// int main()
// {
//     int size, painters,arr[100];
//     cout << "Enter size of array: ";
//     cin >> size;
//     cout << "Enter elements of the array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<i<<" "<<"enter the array element = ";
//         cin >> arr[i];
//     }

//     cout << "Enter number of painters: ";
//     cin >> painters;
//     int result = findWalls(arr, size, painters);
//     if (result == -1)
//     {
//         cout << "Number of painters is more than the number of walls." << endl;
//     }
//     else
//     {
//         cout << "Minimum number of walls = " << result << endl;
//     }

//     return 0;
// } 