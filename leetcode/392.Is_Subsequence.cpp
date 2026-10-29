// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int i = 0,j = 0;
//         while (i < s.length() && j < t.length()) 
//         {
//             if (s[i] == t[j]) 
//             {
//                 i++;
//             }
//             j++;
//         }
//         return i == s.length();
//     }
// };




// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int j = 0;
//         for(int i = 0;i < s.length(); i++)
//         {
//             while(j < t.length() && s[i] != t[j])
//             {
//                 j++;
//             }
//             if(j == t.length())
//             {
//                 return false;
//             }
//             j++;
//         }
//         return true;
//     }
// };