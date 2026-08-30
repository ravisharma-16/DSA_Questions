// #include<iostream>
// using namespace std;
// int find(int arr[],int n)
// {
//     int i,j;
//     int temp,temp2;
//     for(i=0;i<n;i++)
//     {
//         for(j = i+1;j<n;j++)
//         {
//         if(arr[i]==arr[j])
//         {
//              temp = arr[i];
//         }
//         else
//         {
//             temp2 = arr[i];
//         }
  
//         }
//     }
//         cout<<temp2;
//     return temp2; 
// }

// int main()
// {
// int i,n,arr[100];
//  cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//     cout<<"original array = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"find the least number = ";
//     find(arr,n);

// }
// #include<iostream>
// using namespace std;

// int main()
// {
// int i,n,arr[100];
// int j,arr2[100],arr3[100];
// int k,l;
//  cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//     cout<<"original array = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"find the least number = ";
//     for(i=0;i<n;i++)
//     {
//         for(j = i+1;j<n;j++)
//         {
//         if(arr[i]==arr[j])
//         {
//              arr2[k] = arr[i];
//              k++;
//         }
//         else if(arr[i] != arr[j])
//         {
//             arr3[l] = arr[i];
//             l++;
//         }
  
//         }
//     }
//     for(i=0;i<=l;i++)
//     {
//         cout<<arr3[i];
//     }

// }