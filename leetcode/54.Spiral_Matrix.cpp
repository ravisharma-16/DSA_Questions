// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& arr) {
//         int row = arr.size();
//         int col = arr[0].size();
//         int left = 0,right = col - 1;
//         int top = 0,down = row - 1;
//         int shift = 0;
//         vector<int>arr2;
//         while(top <= down && left <= right)
//         {
//            if(shift == 0)
//            {
//             for(int i = left; i <= right; i++)
//             {
//                 arr2.push_back(arr[top][i]);
//             }
//             top++;
//            }
//            else if(shift == 1)
//            {
//             for(int j = top ;j <= down; j++)
//             {
//                 arr2.push_back(arr[j][right]);
//             }
//             right--;
//            }
//            else if(shift == 2)
//            {
//             for(int k = right ;k >= left ;k--)
//             {
//                 arr2.push_back(arr[down][k]);
//             }
//               down--;
//            }
//            else if(shift == 3)
//            {
//             for(int l = down ;l >= top ;l--)
//             {
//                 arr2.push_back(arr[l][left]);
//             }
//            left++;
//            }
//             shift = (shift + 1) % 4;
//         }
//        return arr2;   
//     }
// };