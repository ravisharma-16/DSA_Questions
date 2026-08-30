#include <iostream>
#include <vector>
using namespace std;
int peak(vector<int> &arr)
{
    int start = 0, end = arr.size();
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
        else if (arr[mid] > arr[arr.size() - 1])
        {
             return mid;
        }
        // else if (arr[mid] > arr[mid + 1])
        // {
        //      return mid;
        // }
        mid = (start + end) / 2;
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
        cout << i << " " << "index = ";
        cin >> arr[i];
    }
    cout << "peak element = " << peak(arr);
}