// class Solution {
// public:
//     vector<int> separateDigits(vector<int>& nums) {
//         vector<int>ans;
//         string str = "";
//         for(int val : nums)
//         {
//             str += to_string(val);
//         }
//         for(char ch : str)
//         {
//             ans.push_back(ch - '0');
//         }
//         return ans;
//     }
// };




// class Solution {
//     void solve(int val,vector<int>&ans,stack<int>&st)
//     {
//         while(val > 0)
//         {
//             int last = val % 10;
//             st.push(last);
//             val /= 10;
//         }
//         while(!st.empty())
//         {
//             ans.push_back(st.top());
//             st.pop();
//         }
//     }
// public:
//     vector<int> separateDigits(vector<int>& nums) {
//         vector<int>ans;
//         stack<int>st;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             solve(nums[i],ans,st);
//         }
//         return ans;
//     }
// };