// #include <iostream>
// using namespace std;
// int pow(int n)
// {
//     if (n >= 1)
//     {

//         return 2 * pow(n - 1);
//     }
//     else
//     {
//         return 1;
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the number of giving power -> ";
//     cin >> n;
//     cout << "power of -> " << pow(n) << endl;
// }

 // giving the number of find cube

// #include <iostream>
// using namespace std;
// int pow(int n,int n2)
// {
//     if (n >= 1)
//     {

//         return n2 * pow(n - 1,n2);
//     }
//     else
//     {
//         return 1;
//     }
// }
// int main()
// {
//     int n,powerof;
//     cout << "enter the number how many times -> ";
//     cin >> n;
//     cout << "enter the number of giving power -> ";
//     cin >> powerof;
//     cout << "power of -> " << pow(n,powerof) << endl;
// }

// #include <iostream>
// using namespace std;
// int pow(int n,int n2)
// {
//     if (n2 == 0)
//     {

//         return 1;
//     }
//     if(n2 == 1)
//     {
//         return n;
//     }
//     int ans = pow(n,n2/2);
//     if(n2 % 2 == 0)
//     {
//         return ans * ans;
//     }
//     else
//     {
//         return n * ans * ans;
//     }
// }
// int main()
// {
//     int n,b;
//     cout << "enter the number how many times -> ";
//     cin >> n;
//     cout << "enter the number of giving power -> ";
//     cin >> b;
//     cout << "square of -> " << pow(n,b) << endl;
// }