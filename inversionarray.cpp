// #include<iostream>
// using namespace std;
// int inversion(int arr[],int size)
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//            if(arr[i] > arr[j])
//            {
//             count++;
//            }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr[20],size;
//     cout << "enter the number = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "[" << i << "]" << "index = ";
//         cin >> arr[i];
//     }
//     cout << "inversion number => " << inversion(arr,size);
// }