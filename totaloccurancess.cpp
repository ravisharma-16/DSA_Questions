#include<iostream>
using namespace std;
int first(int arr[],int size, int find)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    int first;
    while(start <= end)
    {
        if(arr[mid] == find)
        {
            first = mid;
            end = mid - 1;
        }
        else if(find < arr[mid])
        {
            end = mid - 1;
        }
        else if(find > arr[mid])
        {
           start = mid + 1;
        }
       mid = (start + end)/2;
    }
    return first;
}
int last(int arr[],int size, int find)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    int last;
    while(start <= end)
    {
        if(arr[mid] == find)
        {
            last = mid;
             start = mid + 1;
        }
        else if(find < arr[mid])
        {
            end = mid - 1;
        }
        else if(find > arr[mid])
        {
           start = mid + 1;
        }
       mid = (start + end)/2;
    }
    return last;
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
    int index = first(arr,size,find);
    cout<<"first index number are = "<<index<<endl;
    int index2 = last(arr,size,find);
    cout<<"last index number are = "<<index2<<endl;
    int total = (index2 - index) + 1;
    cout<<"total occureancrss are = "<<total<<endl;
}
