// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int count = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             long long product = 1;
//             for(int j = i; j < nums.size(); j++)
//             {
//                 product = product * nums[j];
//                 if(product < k)
//                 {
//                     count++;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//         }
//         // cout << count;
//         return count;
//     }
// };