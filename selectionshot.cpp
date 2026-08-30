#include <iostream>
using namespace std;
int swapnum(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[minindex] > arr[j]) //  SELECTION SORT
            {
                minindex = j;
            }
        }
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
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
        cout << i <<" "<< "enter the index = ";
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

//  #include<iostream>
// using namespace std;
// int swapnum(int arr[],int n)
// {
//     int i,j;
//     for(i=1;i<n;i++)
//     {
//         for(j =0;j<n-i;j++)
//         {
//             if(arr[j] > arr[j + 1])
//                {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//       cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int arr[100],n,i;
//     cout<<"enter the size = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the index = ";
//         cin>>arr[i];
//     }
//     cout<<"original array is = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     cout<<"ascending order is = ";
//     swapnum(arr,n);

// }
