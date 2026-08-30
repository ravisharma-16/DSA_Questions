// #include <iostream>
// #include <string>
// using namespace std;
// void romanprint(int num)
// {
//     int arr[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
//     string str[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
//     int i = 13;
//     while (num > 0)
//     {
//         int div = num / arr[i];
//         num = num % arr[i];
//         while (div--)
//         {
//             cout << str[i];
//         }
//         i--;
//     }
// }
// int main()
// {
//     int num = 4;
//     romanprint(num);
// }

#include <iostream>
#include <string>
using namespace std;

int romanToInteger(const string &roman)
{
    int result = 0;

    auto getValue = [](char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    };

    for (int i = 0; i < roman.size(); ++i)
    {
        int currentValue = getValue(roman[i]);
        int nextValue = (i + 1 < roman.size()) ? getValue(roman[i + 1]) : 0;

        if (currentValue < nextValue)
        {
            result -= currentValue;
        }
        else
        {
            result += currentValue;
        }
    }

    return result;
}

int main()
{
    string roman;
    cout << "Enter your Roman numeral: ";
    getline(cin, roman);
    cout << "The integer value of Roman numeral " << roman << " is: " << romanToInteger(roman) << endl;
    return 0;
}


