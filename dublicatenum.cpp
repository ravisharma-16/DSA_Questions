// #include<iostream>
// using namespace std;

// int main()
// {
// int i,size,arr[100],j;
//  cout<<"enter the number = ";
//     cin>>size;
//     for(i=0;i<size;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//     cout<<"original array = ";
//     for(i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(i=0;i<size;i++)
//     {
//         for(j=i+1;j<size;j++)
//         {
//         if(arr[i]==arr[j])
//         {
//      cout<<"duplicate number are = "<<arr[i]<<endl;
//              break;
//         }
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// void intersection(int arr[],int arr2[],int size,int size2)
// {
//     int i,j;
//     for(i=0;i<size;i++)
//     {
//         for(j=0;j<size2;j++)
//         {
//             if(arr[i] == arr2[j])
//             {
//                 cout<<"intersecet number are = "<<arr[i]<<endl;
//                 break;
//             }
//         }
//     }
// }
// int main()
// {
//     int i,j,size,size2,arr[100],arr2[100];
//     cout<<"enter the size one = ";
//     cin>>size;
//     for(i=0;i<size;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//     cout<<"enter the second array"<<endl;
//     cout<<"enter the size two = ";
//     cin>>size2;
//     for(j=0;j<size2;j++)
//     {
//         cout<<j<<" "<<"enter the number = ";
//         cin>>arr2[j];
//     }
//     cout<<"first original array = ";
//     for(i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"second original array = ";
//     for(j=0;j<size2;j++)
//     {
//         cout<<arr2[j]<<" ";
//     }
//     cout<<endl;
//     intersection(arr,arr2,size,size2);
// }
// #include<iostream>
// using namespace std;
// void intersection(int arr[],int arr2[],int size,int size2)
// {
//     int i = 0,j = 0;
//     while(i<size && j<size2)
//     {
//         if(arr[i] < arr2[j])
//             {
//                 i++;
//             }
//             else if(arr[i] == arr2[j])
//             {
//                 cout<<"intersecet number are = "<<arr[i]<<endl;
                
//                 i++;
//                 j++;
//             }
//             else if(arr[i] > arr2[j])
//             {
//                    j++;   
//             }
//     }
    
    
// }
// int main()
// {
//     int i,j,size,size2,arr[100],arr2[100];
//     cout<<"enter the size one = ";
//     cin>>size;
//     for(i=0;i<size;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//     cout<<"enter the second array"<<endl;
//     cout<<"enter the size two = ";
//     cin>>size2;
//     for(j=0;j<size2;j++)
//     {
//         cout<<j<<" "<<"enter the number = ";
//         cin>>arr2[j];
//     }
//     cout<<"first original array = ";
//     for(i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"second original array = ";
//     for(j=0;j<size2;j++)
//     {
//         cout<<arr2[j]<<" ";
//     }
//     cout<<endl;
//     intersection(arr,arr2,size,size2);
// }
// #include<iostream>
// using namespace std;

// int main()
// {
// int i,n,arr[100];
// int j,count = 0;
//  cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"array index number = ";
//         cin>>arr[i];
//     }
//     cout<<"original array = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"duplicate number are = ";
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//         if(arr[i]==arr[j])
//         {
//              count++;
//              break;
//         }
//         }
//     }
//      cout<<count;
// }
// #include<iostream>
// using namespace std;
// int duplicatenum(int arr[],int n)
// {
//     int i,j,count = 0;
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//         if(arr[i]==arr[j])
//         {
//              count++;
//              break;
//         }
//         }
//     }
//      return count;
// }
// void print(int arr[], int n)
// {
//     int i;
//     cout<<"original array is = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
    
// int main()
// {
// int i,n,arr[100];
//  cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"array index number = ";
//         cin>>arr[i];
//     }
//     print(arr,n);
//     cout<<"duplicate number are = ";
//     cout<<duplicatenum(arr,n);
// }