// #include <iostream>
// using namespace std;
// void bubble(int *arr, int size)
// {
//     if (size == 0 || size == 1)
//     {
//         return;
//     }
//     for (int i = 0; i < size - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             int temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//         }
//     }
//     bubble(arr, size - 1);
// }
// int main()
// {
//     int arr[20], size;
//     cout << "enter the size = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     bubble(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }