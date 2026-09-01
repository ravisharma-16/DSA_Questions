// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         for(int it : nums)
//         {
//             mp[it]++;
//         }
//         for(auto it : mp)
//         {
//             if(it.second == 1)
//             {
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };





// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++)
//         {
//             int count = 0;
//             for(int j = 0; j < nums.size(); j++)
//             {
//                 if(nums[i] == nums[j])
//                 {
//                     count++;
//                 }
//             }
//             if(count == 1)
//             {
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };


// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         vector<bool> visited(nums.size(), false);
//         int ans = 0;
        
//         for (int i = 0; i < nums.size(); i++) {
//             if (visited[i]) continue;
            
//             bool foundDuplicate = false;
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] == nums[j] && !visited[j]) {
//                     visited[j] = true;
//                     foundDuplicate = true;
//                 }
//             }
            
//             if (!foundDuplicate) {
//                 ans = nums[i];
//                 break;
//             }
//         }
        
//         return ans;
//     }
// };

