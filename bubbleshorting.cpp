#include <iostream>
using namespace std;
void swapnum(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100], n, i;
    cout << "enter the size = ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << i << " " << "enter the index = ";
        cin >> arr[i];
    }
    cout << "original array is = ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "ascending order is = ";
    swapnum(arr, n);
}
