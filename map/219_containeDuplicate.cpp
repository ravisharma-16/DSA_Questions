#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


//    brute_force

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& arr, int k) {
//         int n = arr.size();
//         for(int i = 0; i < n; i++) {
//             for(int j = i + 1; j < n && j - i <= k; j++) {
//                 if(arr[i] == arr[j]) {
//                     return true;
//                 }
//             }
//         }        
//         return false;
//     }
// };

//     unordered_map


// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int,int>m;
//         for(int i= 0; i < nums.size(); i++)
//         {
//             if(m.find(nums[i]) != m.end(nums[i]) && abs(m[nums[i]] - i) <= k)
//             {
//                 return true;
//             }
//             else
//             {
//                 m[nums[i]] = i;
//             }
//         }
//         return false;
//     }
// };


//  sliding_window


// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int,int>m;
//         int i = 0,j = 0;
//         while(j < nums.size())
//         {
//             if(abs(j - i) > k)
//             {
//                 m.erase(nums[i]);
//                 i++;
//             }
//             if(m.find(nums[j]) != m.end())
//             {
//                 return true;
//             }
//             m[nums[j]] = j;
//             j++;
//         }
//         return false;
//     }
// };