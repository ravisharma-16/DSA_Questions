#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool extra(string &str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool check = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        check = false;
                    }

                    st.pop();
                }
                if (!st.empty())
                {
                    st.pop();
                }
                if (check)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    if (extra(str))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}