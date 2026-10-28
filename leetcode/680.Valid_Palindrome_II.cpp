// class Solution {
//     private:
//     bool solve(string s,int i,int j)
//     {
//         while(i <= j)
//         {
//             if(s[i] != s[j])
//             {
//         return false;
//             }
//             i++;
//             j--;
//         }
//             return true;
//     }
// public:
//     bool validPalindrome(string s) {
//         int st = 0,end = s.length()-1;
//         while(st < end)
//         {
//             if(s[st] != s[end])
//             {
//                 return solve(s,st + 1,end) || solve(s,st,end - 1);
//             }
//             st++;
//             end--;
//         }
//         return true;
//     }
// };