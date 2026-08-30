// #include <iostream>
// using namespace std;
// void reverse(char *arr, int i, int j, char temp)
// {
//     if (i > j)
//     {
//         return;
//     }
//     temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     i++;
//     j--;
//     reverse(arr, i, j, temp);
// }
// int main()
// {
//     char arr[20], temp;
//     int lenght = 0;
//     cout << "enter the string = ";
//     cin.get(arr, 20);
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         lenght++;
//     }
//     reverse(arr, 0, lenght - 1, temp);
//     cout << "reverse string = " << arr;
// }