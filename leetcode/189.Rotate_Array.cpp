// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         if(k > n)
//         {
//             k -= n;
//         }
//         if (k == 0 || k == n)
//         {
//             return;
//         }

//         while (k > 0) {
//             int temp = nums[n - 1];              
//             for (int i = n - 1; i > 0; i--)
//             {
//                 nums[i] = nums[i - 1];    
//             }      
//             nums[0] = temp;
//             k--;
//         }
//     }
// };



// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int>ans;
//         k %= n;
//         if (k == 0 || k == n)
//         {
//             return;
//         }
//         for(int i = n - k; i < n; i++)
//         {
//             ans.push_back(nums[i]);
//         }
//         for(int i = 0; i < n - k; i++)
//         {
//             ans.push_back(nums[i]);
//         }
//         nums = ans;
//     }
// };



// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k %= n;
//         if (k == 0 || k == n)
//         {
//             return;
//         }
//         reverse(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.begin() + k);
//         reverse(nums.begin() + k,nums.end());
//     }
// };