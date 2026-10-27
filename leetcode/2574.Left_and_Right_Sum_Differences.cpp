// class Solution {
// public:
//     vector<int> leftRightDifference(vector<int>& nums) {
//         int n = nums.size(),sum = 0;
//         vector<int>left(n);
//         vector<int>right(n);
//         vector<int>ans(n);
//         for(int i = 0; i < n; i++)
//         {
//             if(i == 0)
//             {
//             left[i] = sum;
//             sum += nums[i];
//             }
//             else
//             {
//             left[i] = sum;
//             sum += nums[i];
//             }
//         }
//         sum = 0;
//         for(int i = n-1; i >= 0; i--)
//         {
//             if(i == n-1)
//             {
//             right[i] = sum;
//             sum += nums[i];
//             }
//             else
//             {
//             right[i] = sum;
//             sum += nums[i];
//             }
//         }
//         for(int i = 0; i < n; i++)
//         {
//             ans[i] = abs(left[i] - right[i]);
//         }
//         return ans;
//     }
// };