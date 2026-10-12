// class Solution {
// public:

//     bool binarySearch(vector<int>& nums2, int target) {

//         int low = 0;
//         int high = nums2.size() - 1;

//         while(low <= high) {

//             int mid = low + (high - low) / 2;

//             if(nums2[mid] == target) {
//                 return true;
//             }
//             else if(nums2[mid] < target) {
//                 low = mid + 1;
//             }
//             else {
//                 high = mid - 1;
//             }
//         }

//         return false;
//     }

//     int getCommon(vector<int>& nums1, vector<int>& nums2) {

//         for(int i = 0; i < nums1.size(); i++) {

//             if(binarySearch(nums2, nums1[i])) {
//                 return nums1[i];
//             }
//         }

//         return -1;
//     }
// };