// #include <iostream>
// using namespace std;
// int banana(int arr[], int size, int hour)
// {
//     int k, start = 0, end = size - 1;
//     int max = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }

//     int total_time = 0;
//     for (int i = 1; i <= max; i++)
//     {
//         total_time += (i + k - 1);
//     }
//     return total_time <= hour;
// }
// int main()
// {
//     int arr[20], size, hour;
//     cout << "enter the size = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << i << " " << "index = ";
//         cin >> arr[i];
//     }
//     cout << "enter the hour = ";
//     cin >> hour;
//     cout << banana(arr, size, hour);
// }

// #include <iostream>
// using namespace std;
// int tablenum(int num, int table = 1)
// {
//     int fact=1;
//     if (table == 11)
//     {
//         return 1;
//     }
//     cout << num * fact << endl;
//     fact = tablenum(num, table + 1);
// }
// int main()  
// {
//     int num, table;
//     cout << "enter the number = ";
//     cin >> num;
//     tablenum(num);
// }



//              -------------------------------------------------



//              2.1       2.5       2.9
//    -----------|---------|---------|----------
//        2                     3

// floor(2.1) = 2        floor(2.9) = 2
// ceil(2.1)  = 3        ceil(2.9)  = 3
// round(2.1) = 2        round(2.9) = 3
// round(2.5) = 3        (half rounds up, away from zero)
// rint(2.5)  = 2        (half rounds to even)
// trunc(2.9) = 2




// class Solution {
//     long long solve(int check,vector<int>&piles)
//     {
//         long long hours = 0;
//         for(int p : piles)
//         {
//             hours += (p + (long long)check - 1) / check;  
//         }
//         return hours;
//     }
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int max = *max_element(piles.begin(), piles.end());
//         int st = 1,end = max,ans = 0;
//         while(st <= end)
//         {
//             int mid = st + (end - st) / 2;
//             if(solve(mid,piles) <= h)
//             {
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else
//             {
//                 st = mid + 1;
//             }
//         }
//         return ans;
//     }
// };





// class Solution {
//     int solve(int check,vector<int>&piles)
//     {
//         int hours = 0;
//         for(int p : piles)
//         {
//             hours += ceil((double)p/check);  
//         }
//         return hours;
//     }
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int max = *max_element(piles.begin(), piles.end());
//         for(int i = 1; i <= max; i++)
//         {
//             if(solve(i,piles) <= h)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };



// class Solution {
//     long long solve(int check,vector<int>&piles)
//     {
//         long long hours = 0;
//         for(int p : piles)
//         {
//             hours += (p + (long long)check - 1) / check;  
//         }
//         return hours;
//     }
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int max = *max_element(piles.begin(), piles.end());
//         for(int i = 1; i <= max; i++)
//         {
//             if(solve(i,piles) <= h)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };




// class Solution {
//     long long solve(int check,vector<int>&piles)
//     {
//         long long hours = 0;
//         for(int p : piles)
//         {
//             hours += p/check;
//             if(p%check != 0)
//             {
//                 hours++;
//             } 
//         }
//         return hours;
//     }
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int max = *max_element(piles.begin(), piles.end());
//         int st = 1,end = max,ans = 0;
//         while(st <= end)
//         {
//             int mid = st + (end - st) / 2;
//             if(solve(mid,piles) <= h)
//             {
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else
//             {
//                 st = mid + 1;
//             }
//         }
//         return ans;
//     }
// };