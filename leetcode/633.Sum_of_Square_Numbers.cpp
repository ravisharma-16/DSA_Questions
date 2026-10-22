// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         if(c == 0)
//         {
//             return true;
//         }
//         for(int i = 1; (long long)i * i <= c; i++)
//         {
//             int s = 0,e = c - 1;
//             while(s <= e)
//             {
//                 int mid = s + (e - s) / 2;
//                 long long val = (long long)i * i + (long long)mid * mid;
//                 if(val == c)
//                 {
//                     return true;
//                 }
//                 else if(val < c)
//                 {
//                     s = mid + 1;
//                 }
//                 else
//                 {
//                     e = mid - 1;
//                 }
//             }
//         }
//         return false;
//     }
// };




// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         if(c == 0) {
//             return true;
//         } 
//             long long s = 0, e = (long long)sqrt((double)c);
//             while(s <= e)
//             {
//                 long long val = (s * s) + (e * e);
//                 if(val == c)
//                 {
//                     return true;
//                 }
//                 else if(val < c)
//                 {
//                     s++;
//                 }
//                 else
//                 {
//                     e--;;
//                 }
//             }
//         return false;
//     }
// };