// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++)
//         {
//             nums[i] = abs(nums[i] * nums[i]);
//         }
//         sort(nums.begin(),nums.end());
//         return nums;
//     }
// };



// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int left = 0,right = nums.size() - 1;
//         int pos = nums.size() - 1;
//         vector<int>ans(nums.size());
//         while(left <= right)
//         {
//             int leftside = abs(nums[left] * nums[left]);
//             int rightside = abs(nums[right] * nums[right]);
//             if(leftside > rightside)
//             {
//                 ans[pos--] = leftside;
//                 left++;
//             }
//             else
//             {
//                 ans[pos--] = rightside;
//                 right--;
//             }
//         }
//         return ans;
//     }
// };



// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
        
//         int n = nums.size();
//         vector<int> ans(n);
        
//         int left = 0;
//         int right = n - 1;
        
//         for (int i = n - 1; i >= 0; i--) {
            
//             if (abs(nums[left]) > abs(nums[right])) {
//                 ans[i] = nums[left] * nums[left];
//                 left++;
//             }
//             else {
//                 ans[i] = nums[right] * nums[right];
//                 right--;
//             }
//         }
        
//         return ans;
//     }
// };