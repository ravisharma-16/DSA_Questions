
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         for(int i = 1; i < n; i++)
//         {
//             if(nums[i - 1] > nums[i])
//             {
//                 count++;
//             }
//         }
//         if(nums[n - 1] > nums[0])
//         {
//             count++;
//         }
//         // cout << count;
//         return count <= 1;
//     }
// };





// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>store(n);
//         for(int i = 0; i < n; i++)
//         {
//             int idx = 0;
//             for(int j = i;j < n; j++)
//             {
//                 store[idx++] = nums[j];
//             }
//             for(int k = 0;k < i; k++)
//             {
//                 store[idx++] = nums[k];
//             }
//             bool check = true;
//             for(int l = 0;l < n - 1; l++)
//             {
//                 if(store[l] > store[l + 1])
//                 {
//                     check = false;
//                     break;
//                 }
//             }
//             if(check)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };