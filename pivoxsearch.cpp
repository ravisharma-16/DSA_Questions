#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
    int start = 0,end = size - 1;
    int mid = (start + end)/2;
    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
           start = mid + 1;
        }
        else
        {
            end = mid;
        }
         mid = (start + end)/2;
    }
    return arr[start];
}
int binarysearch(int arr[],int size, int find)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    while(start <= end)
    {
        if(pivot(arr,size)<=find<=arr[size-1])
        {
        if(arr[mid] == find)
        {
            return mid;
        }
        if(find < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
           start = mid + 1;
        }
        }
       mid = (start + end)/2;
    }
    return -1;
}
int main()
{
    int i,size,arr[100];
    int find;
    cout<<"enter the number = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<i<<" "<<"enter the index = ";
        cin>>arr[i];
    }
    cout<<"enter the find number = ";
    cin>>find;
    cout<<"original array is = ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int num = pivot(arr,size);
    cout<<"pivot number are = "<<num;
    int check = binarysearch(arr,size,find);
    cout<<endl;
     cout<<"index number are = "<<check;
}