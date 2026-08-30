// #include <iostream>
// using namespace std;
// void printnum(int n, int a, int b, int sum)
// {
//     if (n >= 1)
//     {
//         sum = a + b;
//         cout << sum << " ";
//         a = b;
//         b = sum;
//         printnum(n - 1, a, b, sum);
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the number -> ";
//     cin >> n;
//     int a = 0, b = 1;
//     int sum ;
//     cout << "fibonacci serices -> ";
//     cout << a << " " << b << " ";
//     printnum(n, a, b, sum);
// }

#include <iostream>
using namespace std;
void printnum(int n, int a, int b, int sum)
{
    if (n >= 1)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
        printnum(n - 1, a, b, sum);
    }
}
int findFibAtPos(int pos)
{
    if (pos == 0) return 0; // Base case: 0th Fibonacci number is 0
    if (pos == 1) return 1; // Base case: 1st Fibonacci number is 1
    // Recursive case
    return findFibAtPos(pos - 1) + findFibAtPos(pos - 2);
}

int main()
{
    int n,pos;
    cout << "enter the number -> ";
    cin >> n;
    int a = 0, b = 1;
    int sum = 0;
    cout << "enter the position -> ";
    cin >> pos;
    cout << "fibonacci serices -> ";
    cout << a << " " << b << " ";
    printnum(n-2, a, b, sum);
    cout<<endl;
    cout << "Fibonacci number at position " << pos << " -> " << findFibAtPos(pos) << endl;
    return 0;
    
}