// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, arr[20], size, doublenum;
//     int check = 1;
//     cout << "enter the size -> ";
//     cin >> size;
//     for (i = 0; i < size; i++)
//     {
//         cout << i << " " << "enter the index = ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         doublenum = arr[i] * 2;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j && doublenum == arr[j])
//             {
//                 check = 0;
//                 break;
//             }
//         }
//     }
//     if (check == 0)
//     {
//         cout << "0 means present otherthen giving 1 is not present -> " << check;
//     }
//     else
//     {
//         cout << "0 means present otherthen giving 1 is not present -> " << check;
//     }
// }

//                  WRONG 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, size, check = 1, arr[20];
//     cout << "enter the size -> ";
//     cin >> size;
//     for (i = 0; i < size; i++)
//     {
//         cout << i << " " << "enter the index = ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         float halfvalue = arr[i] / 2;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j && halfvalue == arr[j])
//             {
//                 check = 0;
//                 break;
//             }
//         }
//     }
//     if (check == 0)
//     {
//         cout << "0 means present otherthen giving 1 is not present -> " << check;
//     }
//     else
//     {
//         cout << "0 means present otherthen giving 1 is not present -> " << check;
//     }
//     // cout << "0 means present otherthen giving 1 is not present -> " << check;
// }

