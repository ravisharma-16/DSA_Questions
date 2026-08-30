// #include <iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char arr[100];
//     int lenght;
//     bool check = true;
//     cout << "enter the string -> ";
//     cin >> arr;
//     lenght = strlen(arr);
//     for (int i = 0; i<lenght; i++)
//     {
//        if(arr[i] != arr[lenght-1-i])
//        {
//          check = false;
//          break;
//        }
//     }
//     if(check == true)
//     {
//         cout<<"word is palindrome";
//     }
//     else
//     {
//      cout<<"word is not palindrome";   
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int num, s = 0;
    cout << "Enter the num -> ";
    cin >> num;

    while( num > 0)
    {
        int r = num % 10;
        num = num /10;
        s = s*10+r;
    }
    cout << s;
}


