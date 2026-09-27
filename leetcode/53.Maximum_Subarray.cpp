// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int mini = INT_MIN,sum = 0;
//         for(int i = 0; i < n; i++)
//         {
//                 sum += nums[i];
//                 if(mini < sum)
//                 {
//                     mini = sum; 
//                 }
//                 if(sum < 0)
//                 {
//                     sum = 0;
//                 }   
//         }
//         return mini;
//     }
// };