#include<iostream>
using namespace std;
int main()
{
    int a = 12,b = 18;
    int temp ,lcm;
    for(int i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            temp = i;
        }
    }
    lcm = (a * b) / temp;
    cout << lcm;
    return 0;
}
