// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int result = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             result ^= nums[i];
//         }
//         return result;
//     }
// };


// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i = 1; i < nums.size(); i+=2)
//         {
//             if(nums[i-1] != nums[i])
//             {
//                 return nums[i-1];
//             }
//         }
//         return nums[nums.size() - 1];
//     }
// };



// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         for(int num : nums) 
//         {
//             mp[num]++;
//         }
//         for(auto& pair : mp) 
//         {
//             if(pair.second == 1) 
//             {
//                 return pair.first;
//             }
//         }
//         return -1;
//     }
// };