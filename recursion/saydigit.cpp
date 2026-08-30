#include <iostream>
#include <string>
using namespace std;
void sayit(string str[], int size)
{
    if (size == 0)
    {
        return ;
    }
    int div = size % 10;
    size = size / 10;
    sayit(str, size);
    cout << str[div] << "  ";
}
int main()
{
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int size;
    cout << "enter the size = ";
    cin >> size;  
    if(size == 0)
    {
        cout << str[0] << " ";
    }
    else
    {
    sayit(str, size);
    }
}

