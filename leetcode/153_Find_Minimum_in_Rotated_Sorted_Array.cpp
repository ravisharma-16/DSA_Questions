// class Solution {
// public:
//     int findMin(vector<int>& arr) {
//         int n = arr.size();
//         int s = 0,e = n - 1;
//         while(s < e)
//         {
//            int mid = s + (e - s) / 2;
//            if(arr[mid] > arr[e])
//            {
//             s = mid + 1;
//            }
//            else
//            {
//             e = mid;
//            }
//         }
//         return arr[s];
//     }
// };


// class Solution {
// public:
//     int findMin(vector<int>&arr) {
//         sort(arr.begin(),arr.end());
//         return arr[0];
//     }
// };