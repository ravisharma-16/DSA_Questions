// class Solution {
// public:
//     string removeStars(string s) {
//         stack<char>st;
//         for(char &ch : s)
//         {
//             if(ch == '*' && !st.empty())
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.push(ch);
//             }
//         }
//         string newString = "";
//         while(!st.empty())
//         {
//             newString += st.top();
//             st.pop();
//         }
//         reverse(newString.begin(), newString.end());
//         return newString;
//     }
// };






// class Solution {
// public:
//     string removeStars(string s) {
//         stack<char>st;
//         stack<char>rev;
//         for(int i = 0; i < s.length(); i++)
//         {
//             if(s[i] == '*')
//             {
//                 if(!st.empty())
//                 {
//                     st.pop();
//                 }
//             }
//             else
//             {
//                 st.push(s[i]);
//             }
//         }
//         while(!st.empty())
//         {
//             rev.push(st.top());
//             st.pop();
//         }
//         string newString = "";
//         while(!rev.empty())
//         {
//             newString += rev.top();
//             rev.pop();
//         }
//         return newString;
//     }
// };