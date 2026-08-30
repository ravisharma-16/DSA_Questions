// #include<iostream>
// using namespace std;
// int peak(int arr[],int size)
// {
//     int start = 0,end = size - 1;
//     int mid = (end + start)/2;
//     while(start < end)
//     {
//         if(arr[mid] < arr[mid+1])
//         {
//            start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//          mid = (end + start)/2;
//     }
//     return start;
// }
// int main()
// {
//     int i,size,arr[100];
//     int find;
//     cout<<"enter the number = ";
//     cin>>size;
//     for(i=0;i<size;i++)
//     {
//         cout<<i<<" "<<"enter the index = ";
//         cin>>arr[i];
//     }
//     cout<<"original array is = ";
//     for(i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int max = peak(arr,size);
//     cout<<"maximum number are = "<<max;

// }


