#include<iostream>
#include<stack>
using namespace std;

 void bottom(stack<int>&stack, int value)
{
    if(stack.empty())
    {
        stack.push(value);
        return;
    }
    int top = stack.top();
    stack.pop();
    bottom(stack, value);
    stack.push(top);
}

void reverse(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    bottom(s,top);
}
int main()
{
    stack<int>stack;
    for (int i = 0; i < 5; i++)
    {
        int value;
        cout << "Enter the value: ";
        cin >> value;
        stack.push(value);
    }
    reverse(stack);
    while (!stack.empty())
    {
        cout << stack.top() << "\t";
        stack.pop();
    }
    return 0;
}