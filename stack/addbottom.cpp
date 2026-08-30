#include<iostream>
#include<stack>
using namespace std;
void bottom(stack<int>&s,int value)
{
     int size = s.size(); 
    int* arr = new int[size];
    for(int i = 0; i < size; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
    s.push(value);
    for(int i = size - 1; i >= 0; i--)
    {
        s.push(arr[i]);
    }
    delete[] arr;
}
// void bottom(stack<int>&stack, int value)
// {
//     if(stack.empty())
//     {
//         stack.push(value);
//         return;
//     }
//     int top = stack.top();
//     stack.pop();
//     bottom(stack, value);
//     stack.push(top);
// }
int main()
{
    stack<int>stack;
    int val;
    for (int i = 0; i < 5; i++)
    {
        int value;
        cout << "Enter the value: ";
        cin >> value;
        stack.push(value);
    }
    cout << "Enter the value to add at the bottom => ";
    cin >> val;
    bottom(stack, val);
    while (!stack.empty())
    {
        cout << stack.top() << "\t";
        stack.pop();
    }
    return 0;
}
