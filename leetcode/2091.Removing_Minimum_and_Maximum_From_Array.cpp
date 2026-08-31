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
//         int n = nums.size();
//         return min({rightside + 1, n - leftside, (leftside + 1 + n - rightside)});
//     }
// };



// class Solution {
// public:
//     int minimumDeletions(vector<int>& nums) {
//         int n = nums.size();
        
//         // Find positions of min and max elements
//         auto minIt = min_element(nums.begin(), nums.end());
//         auto maxIt = max_element(nums.begin(), nums.end());
        
//         int minIdx = minIt - nums.begin();
//         int maxIdx = maxIt - nums.begin();
        
//         int left = min(minIdx, maxIdx);
//         int right = max(minIdx, maxIdx);
        
//         // Three strategies
//         int deleteFromLeft = right + 1;
//         int deleteFromRight = n - left;
//         int deleteFromBoth = (left + 1) + (n - right);
        
//         return min({deleteFromLeft, deleteFromRight, deleteFromBoth});
//     }
// };



// class Solution {
// public:
//     int minimumDeletions(vector<int>& nums) {
//         int n = nums.size();
//         int minIdx = min_element(nums.begin(), nums.end()) - nums.begin();
//         int maxIdx = max_element(nums.begin(), nums.end()) - nums.begin();
        
//         int a = min(minIdx, maxIdx);
//         int b = max(minIdx, maxIdx);
        
//         return min({b + 1, n - a, a + 1 + n - b});
//     }
// };