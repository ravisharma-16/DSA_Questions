// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, num2, hcf = 0;
//     cout << "enter the number -> ";
//     cin >> num;
//     cout << "enter the number 2 -> ";
//     cin >> num2;
//     for (int i = 1, j = 1; i < num, j < num2; i++, j++)
//     {
//         if (num % i == 0 && num2 % j == 0)
//         {
//             hcf = i;
//         }
//     }
//     cout << "hcf of -> " << hcf;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, num2, hcf = 0;
// cout << "enter the number -> ";
// cin >> num;
// cout << "enter the number 2 -> ";
// cin >> num2;
//     if (num == 0)
//     {
//         hcf = num2;
//     }
//     if (num2 == 0)
//     {
//         hcf = num;
//     }
//     while (num != num2)
//     {
//         if (num > num2)
//         {
//             num = num - num2;
//             hcf = num;
//         }
//         else
//         {
//             num2 = num2 - num;
//             hcf = num2;
//         }
//     }
//     cout << "hcf of -> " << hcf;
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[10],d,n;
    cout<<"enter the number = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout <<"enter the index number of "<<i<<" = ";
        cin >> arr[i];
    }
    cout << "enter the deleting index = ";
    cin >> d;
    if(d == n ||d >= n)
    {
        cout << "not exist index ";
        return 0;
    }
    for(int i = d; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for(int i = 0;i < n-1;i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
