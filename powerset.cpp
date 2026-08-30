#include <iostream>
#include <vector>
using namespace std;
void powerset(vector<int> &arr)
{
    cout << "[ ]" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            cout << "[ ";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << " ]";
            cout << endl;
        }
        cout << endl;
    } 
}
int main()
{
    int size;
    cout << "enter the size = ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "[" << i << "]" << " " << "index = ";
        cin >> arr[i];
    }
    powerset(arr);
}
