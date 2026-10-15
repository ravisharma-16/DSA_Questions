// class Solution {
// public:
//     int sumCounts(vector<int>& nums) {
//         int total = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             set<int>count;
//             for(int j = i; j < nums.size(); j++)
//             {
//                 count.insert(nums[j]);
//                 int size = count.size();
//                 total += size * size;
//             }
//         }
//         return total;
//     }
// };




// class Solution {
// public:
//     int sumCounts(vector<int>& nums) {
//         long long total = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             unordered_set<int>count;
//             for(int j = i; j < nums.size(); j++)
//             {
//                 count.insert(nums[j]);
//                 int size = count.size();
//                 total += size * size;
//             }
//         }
//         return (int)total;
//     }
// };