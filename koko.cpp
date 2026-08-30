#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int koko(const vector<int> &arr, int speed)
{
    int totalhrs = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        totalhrs += ceil((double)arr[i] / speed);
    }
    return totalhrs;
}

int eats(vector<int> &arr, int hours)
{
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) 
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    int s = 1, e = max;
    int ans = max;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int total = koko(arr, mid);
        if (total <= hours)
        {
            ans = mid; 
            e = mid - 1; 
        }
        else
        {
            s = mid + 1; 
        }
    }
    return ans; 
}

int main()
{
    int n, hours;
    cout << "Enter the number of piles: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number of bananas in pile " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    int result = eats(arr, hours);
    cout << "Minimum eating speed: " << result << endl;

    return 0;
}
