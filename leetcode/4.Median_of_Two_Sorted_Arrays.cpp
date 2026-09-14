// class Solution {
// public:
//     double findMedianSortedArrays(vector<int> &arr, vector<int> &arr2) {
//         for (int i = 0; i < arr2.size(); i++) {
//             arr.push_back(arr2[i]);
//         }
//         sort(arr.begin(),arr.end());
//         int n = arr.size();
//         if (n % 2 == 1) {
//             return arr[n / 2];
//         } else {
//             return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
//         }
//     }
// };
