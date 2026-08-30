#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    string str = "ravii ssharma";

    unordered_map<char, int> st;
    for (int i = 0; i < str.size(); i++)
    {
        st[str[i]]++;
    }

    for (auto it : st)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    int count = 0;
    char ch;
    for (auto it : st)
    {
        if (it.second > count)
        {
            count = it.second;
            ch = it.first;
        }
    }
    cout << ch << " -> " << count;
    return 0;
}
