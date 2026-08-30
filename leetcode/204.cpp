#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the number = ";
    cin >> n;
    vector<bool> prime(n + 1, true);
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
           
            cout << i <<" ";
        }
        for (int j = i * 2; j < n; j = j + i)
        {
            prime[j] = false;
        }
    }
}