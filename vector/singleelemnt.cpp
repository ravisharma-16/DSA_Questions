#include <iostream>
#include <vector>
#include <string>
using namespace std;
int firstUniqChar(string s)
{
    vector<int> check(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        check[s[i] - 'a'] = check[s[i] - 'a'] + 1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (check[s[i] - 'a'] == 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string str = "leetcode";
    cout << firstUniqChar(str);
}