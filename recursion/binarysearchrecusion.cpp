// #include <iostream>
// using namespace std;
// void shorting(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
// bool binarysearch(int arr[], int size, int start, int end, int key)
// {
//     if(start > end)
//     {
//         return false;
//     }
//     int mid = start + (end - start) / 2;
//     if (arr[mid] == key)
//     {
//         return true;
//     }
//     if (arr[mid] < key)
//     {
//         binarysearch(arr, size, mid + 1, end, key);
//     }
//     else
//     {
//         binarysearch(arr, size, start, mid - 1, key);
//     }
// }
// int main()
// {
//     int arr[20], size, key;
//     cout << "enter the size => ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "[" << i << "]" << " " << "enter the value => ";
//         cin >> arr[i];
//     }
//     shorting(arr, size);
//     cout << "enter the finding number => ";
//     cin >> key;
//     int start = 0, end = size - 1;
//     bool ans = binarysearch(arr, size, start, end, key);
//     if (ans)
//     {
//         cout << "present";
//     }
//     else
//     {
//         cout << "not present";
//     }
// }