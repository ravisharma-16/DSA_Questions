#include <iostream>
#include <math.h>
using namespace std;
void keypad(string digits, string arr[], string output, int i)
{
    // base case
    if (i >= digits.length())
    {
        cout << "{" << output << "}";
        return;
    }

    int num = digits[i] - '0';

    if (num < 0 || num > 9)
    {
        cout << "Invalid digit in input." << endl;
        return;
    }
    string value = arr[num];

    for (int j = 0; j < value.length(); j++)
    {
        keypad(digits, arr, output + value[j], i + 1);
    }
}
int main()
{
    string arr[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string digits(2, '\0');
    cout << endl
         << "enter string : ";
    cin >> digits;
    if (!digits.empty())
    {
        keypad(digits, arr, "", 0);
    }
}
