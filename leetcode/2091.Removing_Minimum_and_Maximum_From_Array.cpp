// class Solution {
// public:
//     int minimumDeletions(vector<int>& nums) {
//         int MinNum = 0,MaxNum = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] > nums[MaxNum])
//             {
//                 MaxNum = i;
//             }
//             else if(nums[i] < nums[MinNum])
//             {
//                 MinNum = i;
//             }
//         }
//         int leftside = min(MaxNum,MinNum);
//         int rightside = max(MaxNum,MinNum);
//         int removefromfront = rightside + 1;
//         int removefromback = nums.size() - leftside;
//         int removebothside = (leftside + 1) + (nums.size() - rightside);
//         int find = min(removefromfront,removefromback);
//         return min(find,removebothside);
//     }
// };