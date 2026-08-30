#include<iostream>
using namespace std;
int main()
{
    int a = 12,b = 18;
    int max ,lcm;
    max = (a > b) ? a : b;
    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }
    cout << lcm;
    return 0;
}