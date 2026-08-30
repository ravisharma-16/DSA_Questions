#include <iostream>
#include <vector>
#include <string>
using namespace std;
int possibleStringCount(string str)
{
    int repetitive = 0, non_repetitive = 0;
    vector<int> arr(26, 0);
    for (char ch : str)
    {
        // arr[ch - 'a']++;
        arr[ch - 'a'] = arr[ch - 'a'] + 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 1)
        {
            non_repetitive++;
        }
        else if (arr[i] > 1)
        {
            repetitive++;
        }
    }

    return repetitive;
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "The number of characters that repeat in the string are: " << possibleStringCount(str);
    return 0;
}

