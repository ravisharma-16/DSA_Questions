// #include<iostream>
// using namespace std;
// void reverse(int arr[],int n)
// {
//     int i;
//     for(i=n-1;i>=0;i--)
//     {
//         cout<<arr[i];
//     }
// }
// int main()
// {
//     int i,n,arr[100];
//    cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//      cout<<"original number = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     cout<<endl;
//     cout<<"reverse number are = ";
//     reverse(arr,n);
// }
    
// #include<iostream>
// using namespace std;
// int reverse(int arr[],int n)
// {
//     int i,j;
//     int temp;
//     for(i=0,j=n-1;i<j;i++,j--)
//     {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

// }
// int main()
// {
//     int i,n,arr[100];
//    cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//      cout<<"original number = ";
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     cout<<endl;
//     cout<<"reverse number are = ";
//     reverse(arr,n);
// }
    
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[50],size,i;
//     int start = 0;;
//     cout<<"enter the size = ";
//      cin>>size;
//      int end = size-1;
//       for(i=0;i<size;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }  
//     cout<<"original number = ";
//     for(i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//      while(start <= end)
//      {
//         int temp = 0;
//            temp = arr[start];
//            arr[start] =  arr[end];
//            arr[end] = temp; 
//            start++;
//            end--; 
//      }
//      cout<<endl;
//       cout<<"reverse array = ";
//     for(i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }