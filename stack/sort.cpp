#include<iostream>
#include<stack>
using namespace std;

void sortstack(stack<int>&s)
{
   int size = s.size();
    int* arr = new int[size];
    for(int i = 0; i < size; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        s.push(arr[i]);
    }
    delete[] arr;
}

// void sortstack(stack<int>&s)
// {
//     if(s.empty())
//     {
//         return;
//     }
//     int top = s.top();
//     s.pop();
//     sortstack(s);
//     if(s.empty() || top > s.top())
//     {
//         s.push(top);
//     }
//     else
//     {
//         int value = s.top();
//         s.pop();
//         sortstack(s);
//         s.push(top);
//         s.push(value);
//     }
// }
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
    sortstack(stack);
    while (!stack.empty())
    {
        cout << stack.top() << "\t";
        stack.pop();
    }
}