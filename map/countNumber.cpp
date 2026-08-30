#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 1};
    unordered_map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }



    // for(auto it : m)
    // {
    //     cout<<it.first <<" : "<<it.second<<" "<<endl;
    //     // if(it.second > 1)
    //     // {
    //     //     cout<<it.first;
    //     // }
    // }

    //     for(auto it : arr)
    // {
    //     cout << it << " -> " << m[it] << endl;
    // }

    //     for(int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " : " << m[arr[i]] << endl;
    // }
}