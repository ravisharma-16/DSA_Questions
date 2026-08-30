#include <iostream>
using namespace std;
int main()
{
    int i, j, arr[50], size, temp;
    cout << "enter the size = ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << i << " " << "index = ";
        cin >> arr[i];
    }
    cout << "original array = ";
    for (i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--)   // INSERTION SORT
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    cout << endl;
    cout << "shorting array = ";
    for (j = 0; j < size; j++)
    {
        cout << " " << arr[j];
    }
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 6,b = 4;
//     a = a - b;
//     b = a + b;
//     a = b - a;
//     cout <<a << " " << b; 
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 6,b = 4;
//     a = a ^ b;
//     b = a ^ b;
//     a = b ^ a;
//     cout <<a << " " << b; 
// }