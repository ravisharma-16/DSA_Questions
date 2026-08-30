//  #include<iostream>
// using namespace std;
// int swapnum(int arr[],int n,int pos,int insert)
// {
//     int i;
//    for(i=n;i>=pos;i--)
//    {
//      arr[i] = arr[i-1];
//    }
//    arr[pos] = insert;
//    for(i=0;i<=n;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
// }
// int main()
// {
//     int arr[100],n,i,pos,insert;
//     cout<<"enter the size = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the index = ";
//         cin>>arr[i];
//     }
//     cout<<"enter the position = ";
//     cin>>pos;
//     cout<<"enter the insert number = ";
//     cin>>insert;
//     cout<<"original array is = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     cout<<"inserting array = ";
//     swapnum(arr,n,pos,insert);

// }

#include <iostream>
using namespace std;
int swapnum(int arr[], int n, int insert)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= insert)
        {
            k++;
        }
    }

    for (int i = n; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k] = insert;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100], n, i, insert;
    cout << "enter the size = ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << i << " " << "enter the index = ";
        cin >> arr[i];
    }
    cout << "enter the insert number = ";
    cin >> insert;
    cout << "original array is = ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "inserting array = ";
    swapnum(arr, n, insert);
}
