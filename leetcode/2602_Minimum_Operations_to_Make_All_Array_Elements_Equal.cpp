// class Solution {
// public:
//     vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
//         int n = nums.size();
        
//         // 1. Sort the array
//         sort(nums.begin(), nums.end());
        
//         // 2. Build Prefix Sums
//         vector<long long> prefix(n, 0);
//         prefix[0] = nums[0];
//         for (int i = 1; i < n; i++) {
//             prefix[i] = prefix[i - 1] + nums[i];
//         }
        
//         vector<long long> ans;
        
//         // 3. Process each query in O(log N)
//         for (int q : queries) {
//             // Find the split point: first element >= q
//             int idx = lower_bound(nums.begin(), nums.end(), q) - nums.begin();
            
//             long long cost = 0;
            
//             // Cost to increase elements smaller than q
//             if (idx > 0) {
//                 long long leftSum = prefix[idx - 1];
//                 cost += (long long)idx * q - leftSum;
//             }
            
//             // Cost to decrease elements greater than or equal to q
//             if (idx < n) {
//                 long long rightSum = prefix[n - 1] - (idx > 0 ? prefix[idx - 1] : 0);
//                 cost += rightSum - (long long)(n - idx) * q;
//             }
            
//             ans.push_back(cost);
//         }
        
//         return ans;
//     }
// };







// class Solution {
// public:
//     vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         vector<long long> ans;
        
//         for (int q : queries) {
//             // Find the first element >= q
//             int idx = lower_bound(nums.begin(), nums.end(), q) - nums.begin();
            
//             long long cost = 0;
            
//             // Use accumulate to sum the left part
//             long long leftSum = accumulate(nums.begin(), nums.begin() + idx, 0LL);
//             long long leftCost = (long long)idx * q - leftSum;
            
//             // Use accumulate to sum the right part
//             long long rightSum = accumulate(nums.begin() + idx, nums.end(), 0LL);
//             long long rightCost = rightSum - (long long)(n - idx) * q;
            
//             ans.push_back(leftCost + rightCost);
//         }
//         return ans;
//     }
// };




// class Solution {
// public:
//     vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
//         vector<long long>ans;
//         sort(nums.begin(),nums.end());
//         for(int &val : queries)
//         {
//             long long idx = lower_bound(nums.begin(), nums.end(), val) - nums.begin();
//             long long cost = 0;
//             for(int i = 0;i < idx; i++)
//             {
//                 cost += abs((long long)val - nums[i]);
//             }
//              for(int i = idx;i < nums.size(); i++)
//             {
//                 cost += abs((long long)val - nums[i]);
//             }
//             ans.push_back(cost);
//         }
//         return ans;
//     }
// };
// //  0 1 4 10 18




// class Solution {
// public:
//     vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
//         vector<long long>ans(queries.size());
//         for(int i = 0;i < queries.size(); i++)
//         {
//             long long sum = 0;
//             for(int j = 0; j < nums.size(); j++)
//             {
//                 sum += abs((long long)queries[i] - nums[j]);
//             }
//             ans[i] = sum;
//         }
//         return ans;
//     }
// };