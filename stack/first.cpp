#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>sta;
    sta.push(10);
    sta.push(20);
    sta.push(30);
    sta.push(40);
    cout << "size of stack = " << sta.size() << endl;
    cout << "top element = " << sta.top() << endl;
    sta.pop();
    cout << "top element = " << sta.top() << endl;
    cout << "size of stack = " << sta.size() << endl;
    return 0;
}


// #include <iostream>
// #define n 5
// using namespace std;

// int stack[n];
// int top = -1;
// void push(int value)
// {
//     if (top == n - 1)
//     {
//         cout << "stack overflow";
//     }
//     else
//     {
//         top++;
//         stack[top] = value;
//         cout << "push the value = " << value << endl;
//         cout << endl;
//         cout << endl;
//     }
// }
// void pop()
// {
//     if (top == -1)
//     {
//         cout << "stack underflow";
//     }
//     else
//     {
//         cout << "delete element = " << stack[top];
//         top--;
//         cout << endl;
//         cout << endl;
//     }
// }
// void peak()
// {
//     cout << "top element = " << stack[top];
//     cout << endl;
//     cout << endl;
// }
// void display()
// {
//     cout << "display the stack element = ";
//     for (int i = top; i >= 0; i--)
//     {
//         cout << stack[i] << " ";
//     }
//     cout << endl;
//     cout << endl;
// }
// int main()
// {
//     int choice, value;
//     while (1)
//     {
//         cout << "enter the value choice 1 " << endl;
//         cout << "delete the value choice 2" << endl;
//         cout << "top the value choice 3 " << endl;
//         cout << "display the value choice 4 " << endl;
//         cout << "exit 5 " << endl;
//         cout << endl;
//         cout << endl;
//         cout << "enter the choice = ";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             cout << "enter the value of push = ";
//             cin >> value;
//             push(value);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             peak();
//             break;
//         case 4:
//             display();
//             break;
//         case 5:
//             cout << "exiting" << endl;
//             return 0;

//         default:
//             cout << "please correct choice "<<endl;
//             cout <<endl;
//             cout <<endl;
//             break;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int>stack;
//     for (int i = 0; i < 5; i++)
//     {
//         int value;
//         cout << "Enter the value: ";
//         cin >> value;
//         stack.push(value);
//     }

//     while (!stack.empty())
//     {
//         cout << stack.top() << "\t";
//         stack.pop();
//     }

//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int>stack;
//     for (int i = 0; i < 5; i++)
//     {
//         int value;
//         cout << "Enter the value: ";
//         cin >> value;
//         stack.push(value);
//     }

//     while (!stack.empty())
//     {
//         cout << stack.top() << "\t";
//         stack.pop();
//     }

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     int n = 5;
//     queue<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int value;
//         cout << "enter the num = ";
//         cin >> value;
//         arr.push(value);
//     }
//     for (; !arr.empty();)
//     {
//         cout << arr.front() << " ";
//         arr.pop();
//     }
// }






// #include <iostream>
// #include<string>
// #define n 10
// using namespace std;

// char stack[n];
// int top = -1;
// void push(char value)
// {
//     if (top == n - 1)
//     {
//         cout << "stack overflow";
//     }
//     else
//     {
//         top++;
//         stack[top] = value;
//         //cout << "push the value = " << value << endl;
//         cout << endl;
//         cout << endl;
//     }
// }
// void display()
// {
//     cout << "display the stack element = ";
//     for (int i = top; i >= 0; i--)
//     {
//         cout << stack[i] << " ";
//     }
//     cout << endl;
//     cout << endl;
// }
// int main()
// {
//     int choice;
//     char value;
//     while (1)
//     {
//         cout << "enter the value choice 1 " << endl;
//         cout << "display the value choice 4 " << endl;
//         cout << "exit 5 " << endl;
//         cout << endl;
//         cout << endl;
//         cout << "enter the choice = ";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             cout << "enter the value of push = ";
//             cin>>value;  
//             push(value);
//             break;
//         case 4:
//             display();
//             break;
//         case 5:
//             cout << "exiting" << endl;
//             return 0;

//         default:
//             cout << "please correct choice "<<endl;
//             cout <<endl;
//             cout <<endl;
//             break;
//         }
//     }
//     return 0;
// }