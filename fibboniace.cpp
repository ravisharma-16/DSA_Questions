// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 0,b = 1;  
//     int fib,i;
//     cout<<a<<" "<<b<<" ";
//      for(i=0;i<10;i++)
//      {
//         fib = a+b;
//         cout<<" "<<fib<<" ";
//         a = b;
//         b = fib;

//      }
// }
#include<iostream>
using namespace std;
int main()
{
    int a = 0,b = 1;
    int fib,i,n;
     cout<<"enter the number = ";
     cin>>n;
     for(i=2;i<n;i++)
     {
        fib = a+b;
        a = b;
        b = fib;

     }
        cout<<" "<<fib<<" ";
}
