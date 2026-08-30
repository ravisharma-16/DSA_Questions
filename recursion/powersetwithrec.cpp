// #include <iostream>
// #include <vector>
// using namespace std;
// void powerset(vector<int> &arr, int i, vector<int> arr2)
// {
//     if (i == arr.size())
//     {
//         cout << "{ ";
//         for (int i = 0; i < arr2.size(); i++)
//         {
//             cout << arr2[i] << " ";
//         }
//         cout << "}" << endl;
//         return;
//     }
//     // exclude
//     powerset(arr, i + 1, arr2);
//     arr2.push_back(arr[i]);
//     // include
//     powerset(arr, i + 1, arr2);
// }
// int main()
// {
//     int size;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int> arr(size);
//     vector<int> arr2;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" << " " << "enter the value => ";
//         cin >> arr[i];
//     }
//     cout << "subset arr => " << endl;
//     powerset(arr, 0, arr2);
// }

#include <iostream>
#include<string>
#include <vector>
using namespace std;
void powerset(string arr, int i, string arr2)
{
    if (i == arr.size())
    {
        cout << "{ ";
        for (int i = 0; arr2[i] != '\0'; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "}" << endl;
        return;
    }
    // exclude
    powerset(arr, i + 1, arr2);
    arr2 += arr[i];
    // include
    powerset(arr, i + 1, arr2);
}
int main()
{
    string arr, arr2;
    cout << "enter the string => ";
    cin >> arr;
    cout << "subset arr => " << endl;
    powerset(arr, 0, arr2);
}