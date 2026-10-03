// class Solution {
// public:
//     vector<string> summaryRanges(vector<int>& arr) {
//         int start = 0;
//        vector<string> result;
//         int n = arr.size() - 1;
//         for(int i = 0; i <= n; i++)
//         {
//             start = arr[i];
//         while( i + 1 <= n && arr[i]+1 == arr[i + 1])
//         {
//           i++;
//         }
//         if(start != arr[i])
//         {
//             result.push_back(to_string(start) + "->" + to_string(arr[i]));
//         }
//         else
//         {
//             result.push_back(to_string(start));
//         }
//         }
//         return result;
//     }
// };