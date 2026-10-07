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




// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         if(k <= 1)
//         {
//             return 0;
//         }
//         int count = 0;
//         long long product = 1;
//         int i = 0,j = 0;
//         while(j < nums.size())
//         {
//             // product *= nums[j];
//             // if(product < k && j < nums.size())
//             // {
//             //     count += (j - i) + 1;
//             //     j++;
//             // }
//             // else
//             // {
//             //     i++;
//             //     j = i;
//             //     product = 1;
//             // }

//              product *= nums[j];             
//             while(product >= k)
//             {
//                 product /= nums[i];
//                 i++;
//             }
//             count += (j - i + 1);            
//             j++;
//         }
//         return count;
//     }
// };