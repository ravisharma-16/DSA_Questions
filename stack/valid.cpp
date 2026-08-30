#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool valid(string str)
{
    stack<char>s;
    for(int i = 0; i < str.length(); i++)
    {
        int ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                if(ch == ')' && s.top() == '(')
                {
                    s.pop();
                }
                else if(ch == '}' && s.top() == '{')
                {
                    s.pop();
                }
                else if(ch == ']' && s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    if(valid(str))
    {
        cout<<"Valid string"<<endl;
    }
    else
    {
        cout<<"Invalid string"<<endl;
    }
}