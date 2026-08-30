// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n,sum = 0;
//     cout<<"enter the number = ";
//     cin>>n;
//     for(i=1;i<=n;i++)             //sum print karna
//     {
//         sum+=i;
//     }
//     cout<<sum;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n,fact = 1;
//     cout<<"enter the number = ";
//     cin>>n;
//     for(i=1;i<=n;i++)              //multiplay print karna
//     {
//         fact*=i;
//     }
//     cout<<fact;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n,count = 0;
//     cout<<"enter the number = ";
//     cin>>n;
//     for(;n>0;)                  //number count 1 2 3 4 = 4 ans
//     {
//     n = n/10;
//         count++;
//     }
//     cout<<count;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n,count = 0,a[100];
//     //cout<<"enter the number = ";
//     //cin>>n;
//     char ch;
//     i = 'A';
//     while(i<'Z')                  
//     {
        
//         cout<<i<<" "<<(char)i<<"\t";
//         i++;
    
//     }
// }
// 
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// int product = 1,sum = 0;
// cout<<"enter the number = ";
// cin>>n;
// for(;n!=0;)               //product = 2 * 3 * 4 = 24
// {                         // sum = 2 + 3 + 4 = 9
//     int digiet = n%10;     //product - sum = 15   
//     product *= digiet;
//     sum += digiet;
//     n = n/10;
// }
// cout<<"subtract of = "<<product-sum;
// } 
// 
// 
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// int ans = 0;
// cout<<"enter the number = ";
// cin>>n;
// for(;n!=0;)              // number reverse 2 3 4 5 = 5 4 3 2
// {
// int digiet = n % 10;
// if((ans>INT32_MAX/10) || (ans< INT32_MIN/10))
// {
//     ans = 0;
//     break;
// }
// ans = (ans*10) + digiet;
// n = n/10; 
// }
// cout<<"reverse is = "<<ans;
// }      
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// int ans = 0;
// cout<<"enter the number = ";
// cin>>n;
// for(;n!=0;)              // number reverse 2 3 4 5 = 5 4 3 2
// {
// int digiet = n % 10;
// ans = (ans*10) + digiet;
// n = n/10; 
// }
// cout<<"reverse is = "<<ans;
// }            

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// int ans = 0;
// cout<<"enter the number = ";
// cin>>n;
// for(;n!=0;)              // number reverse 2 3 4 5 = 5 4 3 2
// {
// int digiet = n % 10;
// if((ans>INT32_MAX/10) || (ans< INT32_MIN/10))
// {
//     ans = 0;
//     break;
// }
// ans = (ans*10) + digiet;
// n = n/10; 
// }
// cout<<"reverse is = "<<ans;
// }
// #include<iostream>
// using namespace std;
// int numsum(int arr[],int n)
// {
//     int i;
//     int sum = 0;
//    for(i=0;i<n;i++)
//     {
//             sum += arr[i];
//     }
//     return sum;   
// }
// int main()
// {
//     int i,n,arr[100];
//     cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" "<<"enter the number = ";
//         cin>>arr[i];
//     }
//     cout<<"sum of number is = "<<numsum(arr,n);
// }