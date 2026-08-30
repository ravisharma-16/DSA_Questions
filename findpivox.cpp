#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
    int start = 0,end = size - 1;
    int mid = (start + end)/2;
    while(start < end)
    {
        if(arr[mid] > arr[0])
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
int main()
{
    int i,size,arr[100];
    cout<<"enter the number = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<i<<" "<<"enter the index = ";
        cin>>arr[i];
    }
    cout<<"original array is = ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int num = pivot(arr,size);
    cout<<"pivot number are = "<<num;

}