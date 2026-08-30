#include <iostream>
#include <stack>
using namespace std;
// void deleteelement(stack<int> &stack, int size, int count)
// {
//     if (count == size/2)
//     {
//         stack.pop();
//         return;
//     }
//     int value = stack.top();
//     stack.pop();
//     deleteelement(stack, size, count + 1);
//     stack.push(value);
// }

void deleteelement(stack<int> &stack, int size, int count)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = stack.top();
        stack.pop();
    }

    // for (int i =  size/ 2; i < size; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }

    // for(int i = size - 2; i >= 0; i--)
    // {
    //     stack.push(arr[i]);
    // }
    for(int i = size - 1; i >= 0; i--)
    {
          if(i == size/2)
          {
              continue;
          }
          else
          {
              stack.push(arr[i]);
          }
    }
    delete[] arr;
}
int main()
{
    stack<int> stack;
    for (int i = 0; i < 5; i++)
    {
        int value;
        cout << "Enter the value: ";
        cin >> value;
        stack.push(value);
    }
    deleteelement(stack, stack.size(), 0);
    while (!stack.empty())
    {
        cout << stack.top() << "\t";
        stack.pop();
    }
    return 0;
}