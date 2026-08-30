#include <iostream>
using namespace std;
int main()
{
    int a, b, ans = 1;
    cout << "enter the number -> ";
    cin >> a;
    cout << "enter the number of finding square or cube -> ";
    cin >> b;
    for (int i = 1; i <= b; i++)
    { 
        ans = a * ans;
    }
    cout << ans;
}