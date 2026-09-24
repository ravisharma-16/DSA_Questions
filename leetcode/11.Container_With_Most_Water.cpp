// class Solution {
// public:
//     int maxArea(vector<int> &arr) {
//         int left = 0, right = arr.size() - 1;
//         int area = 0;

//         while (left < right) {
//             int height = min(arr[left], arr[right]);
//             int width = right - left;
//             area = max(area, height * width);

//             if (arr[left] < arr[right]) {
//                 left++;
//             } else {
//                 right--;
//             }
//         }

//         return area;
//     }
// };
