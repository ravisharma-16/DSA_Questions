// #include<iostream>
// using namespace std;
// void welcome()
// {
//     cout<<"HELLO RAVI";                  // void function
// }
// int main()
// {
//     welcome();
// }

// #include<iostream>
// using namespace std;
// int add(int a,int b)
// {
//     int sum = a+b;
//     return sum;
// }

// int main()
// {
//     int a,b;
//     cout<<"enter the number = ";
//     cin>>a;
//     cout<<"enter the 2 number = ";
//     cin>>b;
//     cout<<add(a,b)<<endl;
//     int c,d;
//     cout<<"enter the 3 number = ";
//     cin>>c;
//     cout<<"enter the 4 number = ";
//     cin>>d;
//     cout<<add(c,d)<<endl;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int power(int a,int b)
// {
//     int ans = pow(a,b);
//     return ans;
// }

// int main()
// {
//     int a,b;
//     cout<<"enter the number = ";
//     cin>>a;
//     cout<<"enter the 2 number = ";
//     cin>>b;
//     cout<<power(a,b)<<endl;
//     int c,d;
//     cout<<"enter the 3 number = ";
//     cin>>c;
//     cout<<"enter the 4 number = ";
//     cin>>d;
//     cout<<power(c,d)<<endl;
// }
// #include<iostream>
// using namespace std;
// int add(int a,int b)
// {
//     int sum = a+b;
//     return sum;
// }

// int main()
// {
//     int a,b;
//     cout<<"enter the number = ";
//     cin>>a;
//     cout<<"enter the 2 number = ";
//     cin>>b;
//     cout<<add(a,b)<<endl;
//     int c,d;
//     cout<<"enter the 3 number = ";
//     cin>>c;
//     cout<<"enter the 4 number = ";
//     cin>>d;
//     cout<<add(c,d)<<endl;
// }


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int>a = {1,2,3,4,1};
    unordered_map<int,bool>m;
    for(auto i : a)
    {
        if(!m[i])
        {
            cout<<i<<" ";
            m[i] = true;
        }
    }
}
