// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20], size, check = 0;
//     cout << "enter the size = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << i << " " << "enter the number = ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < size; i += 2)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             check++;
//         }
//     }
//     cout << "sales by match = "<< check;
// }
