// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number = ";
//     cin >> n;
//     vector<bool> prime(n + 1, true);
//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//         {
           
//             cout << i <<" ";
//         }
//         for (int j = i * 2; j < n; j = j + i)
//         {
//             prime[j] = false;
//         }
//     }
// }


// class Solution {
// public:
//     int countPrimes(int n) {
//         int count = 0;
//         for(int i = 2; i < n; i++)
//         {
//             bool check = false;
//             for(int j = 2; j <= i; j++)
//             {
//                 if(i % j == 0 && i != j)
//                 {
//                     check = true;
//                 }
//             }
//             if(!check)
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };