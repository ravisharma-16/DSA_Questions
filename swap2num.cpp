// #include<iostream>
// using namespace std;
// void swap(int arr[],int n)
// {
//     int i;
//     for( i = 0; i < n-1; i += 2)
//     {
//             int temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i+1] = temp;
//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int i,n,arr[100];
//      cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//      cout<<"original array element number = "<<endl;
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"swap number is = ";
//     swap(arr,n);
// }
// #include<iostream>
// using namespace std;
// int swapnum(int arr[],int n)
// {
//     int left,right;
//     for(left=0;left<n;left++)
//     {
//         for(right =left+1;right<n;right++)
//         {
//             if(arr[left] > arr[right])
//                {
//                 int temp = arr[left];
//                 arr[left] = arr[right];
//                 arr[right] = temp;
//                }
//         }
//     }
//     for(left=0;left<n;left++)
//     {
//       cout<<arr[left]<<" ";
//     }
// }
// int main()
// {
//     int arr[100],n,i;
//     cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<"enter the index = ";
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