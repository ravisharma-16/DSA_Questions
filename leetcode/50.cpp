#include <iostream>
#include <vector>
using namespace std;
int power(int pow, int num)
{
    int ans = 1, binarynum = pow;
    while (binarynum > 0)
    {
        if (binarynum % 2 == 1)
        {
            ans *= num;
        }
        num = num * num;
        binarynum /= 2;
    }
    return ans;
}
int main()
{
    int num, pow;
    cout << "enter the number = ";
    cin >> num;
    cout << "enter the giving number of power = ";
    cin >> pow;
    cout << power(pow, num);
    cout << endl;
}