// #include <iostream>
// using namespace std;
// bool palindrom(char *arr, int i, int j)
// {
//     if (i >= j)
//     {
//         return true;
//     }
//    if(arr[i] != arr[j])
//    {
//     return false;
//    }
//    else
//    {
//     palindrom(arr, i+1, j-1);
//    }
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
//     if(palindrom(arr, 0, lenght - 1))
//     {
//     cout << " this string are palindrome  ";
//     }
//     else
//     {
//         cout << " this is not string are palindrome  ";
//     }
// }