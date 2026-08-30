
//               decimal to binary

#include <iostream>
using namespace std;
int decimalnum(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int reminder = n % 2;
        n /= 2;
        ans += (reminder * pow);
        pow = pow * 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number of convertion of binary => ";
    cin >> n;
    cout << "decimal to binary convertion => " << decimalnum(n) << endl;
}

//    BINARY TO DECIMAL

// #include <iostream>
// using namespace std;
// int decimalnum(int n)
// {
//     int ans = 0, pow = 1;
//     while (n > 0)
//     {
//         int reminder = n % 10;
//         n /= 10;
//         ans += (reminder * pow);
//         pow = pow * 2;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "enter the number of convertion of decimal => ";
//     cin >> n;
//     cout << "binary to decimal convertion => " << decimalnum(n) << endl;
// }