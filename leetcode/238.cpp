#include<iostream>
#include<vector>
using namespace std;
void productof(vector<int>&arr,int size)
{
    int fact[size];
    for (int i = 0; i < size; i++)
    {
        fact[i] = 1;
        for (int j = 0; j < size; j++)
        {
            if(i != j)
            {
              fact[i] *= arr[j];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = fact[i];
    }
    
    
}
int main()
{
    int size;
    cout << "enter the size => ";
    cin >> size;
    vector<int>vec(size);
    for (int i = 0; i < size; i++)
    {
       cout << "[" << i << "]" << "index => ";
       cin >> vec[i];
    }
    productof(vec,size);
    for (int i = 0; i < vec.size(); i++)
    {
       cout << vec[i] << " ";
    }
    
}