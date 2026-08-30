// class Solution {
// public:
//     bool detectCapitalUse(string word) {
//         int countUpper = 0;
//         for(int i = 0; i < word.length(); i++)
//         {
//             if(word[i] >= 'A' && word[i] <= 'Z')
//             {
//                 countUpper++;
//             }
//         }
//         if(countUpper == 1 && word[0] >= 'A' && word[0] <= 'Z')
//         {
//             return true;
//         }
//         if(countUpper == word.length() || countUpper == 0)
//         {
//             return true;
//         }
//         return false;
//     }
// };