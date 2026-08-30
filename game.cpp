#include<iostream>
using namespace std;
int shorting(int arr[],int size,int arr2[],int size2)
{
     int temp,i,j;
       for( i=1; i<size; i++)
    {
        temp = arr[i];
        for(  j = i-1;j>=0 ;j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
     cout<<endl;
     cout<<"shorting array = ";
     for(i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    int temp2,k,l;
       for( k=1; k<size2; k++)
    {
        temp2 = arr2[k];
        for(  l = k-1;l>=0 ;l--)
        {
            if(arr2[l] > temp2)
            {
                arr2[l+1] = arr2[l];
            }
            else{
                break;
            }
        }
        arr2[l+1] = temp2;
    }
     cout<<endl;
     cout<<"shorting array 2 = ";
     for(k=0;k<size2;k++)
    {
        cout<<" "<<arr2[k];
    }
    cout<<"\n";
    int m,n,hello,more=0,less=0;
    int num = 1;
    for(m=0;m<size;m++)
    {
         hello = arr[m];
         for(n = 0;n<size2;n++)
         {
            if(hello < arr2[n])
            {
              more++;
            }
            else{
                less++;
            }
         }
          int ans = (2*less + 3*more);
           cout<<num<<" "<<"ans"<<" "<<ans<<endl;
           num++;
    }
}
// int min(int arr[],int arr2[],int size2,int size)
// {
//     int min,i;
//     min = arr[0];
//     for ( i = 0; i < size; i++)
//     {
//         if(min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     int variable =0,variable2 = 0;
//      for ( i = 0; i < size2; i++)
//     {
//         if(min < arr2[i])
//         {
//             variable++;
//         }
//         else
//         {
//          variable2++;
//         }
//     }
//     int ans = (2*variable2 + 3*variable);
//     cout<<endl;
//     return ans;
// }
int main()
{
    int i,j,arr[50],arr2[50],size,size2;
    cout<<"enter the size = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<i<<" "<<"index = ";
        cin>>arr[i];
    }
    cout<<"enter the second size = ";
    cin>>size2;
    cout<<"enter second array"<<endl;
     for(i=0;i<size2;i++)
    {
        cout<<i<<" "<<"index = ";
        cin>>arr2[i];
    }
    cout<<"first original array = ";
     for(i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
     cout<<endl;
    cout<<"second original array = ";
     for(i=0;i<size2;i++)
    {
        cout<<" "<<arr2[i];
    }
     shorting(arr,size,arr2,size2);
    // cout<<"ans = "<<min(arr,arr2,size2,size);
}