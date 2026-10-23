// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         stack<char>st;
//         string ans = "";
//         for(int i = 0; i < num.length(); i++)
//         {
//             while (!st.empty() && k > 0 && st.top() > num[i])
//             {
//                 st.pop();
//                 k--;
//             }
//             st.push(num[i]);
//         }
//         // if k > 0 
//         while (k > 0 && !st.empty())
//         {
//             st.pop();
//             k--;
//         }
//         while(!st.empty())
//         {
//             ans += st.top();
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         int pos = 0;
//         while (pos < ans.size() && ans[pos] == '0')
            // {
            //     pos++;
            // }
//         ans = ans.substr(pos);
//         return ans.length() == 0 ? "0" : ans;
//     }
// };





// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         string ans = "";
//         for(int i = 0; i < num.length(); i++)
//         {
//             while (!ans.empty() && k > 0 && ans.back() > num[i])
//             {
//                 ans.pop_back();
//                 k--;
//             }
//             ans.push_back(num[i]);
//         }
//         // if k > 0 
//         while (k > 0 && !ans.empty())
//         {
//             ans.pop_back();
//             k--;
//         }
//         size_t pos = ans.find_first_not_of('0');
//         return (pos == string::npos) ? "0" : ans.substr(pos);
//     }
// };