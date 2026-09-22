// #include<iostream>
// using namespace std;
// void search(int arr[][20], int row, int col, int target)
// {
//     bool found = false;
//  for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if(arr[i][j] == target)
//             {
//                 cout << "Target " << target << " found at index [" << i << "][" << j << "]" << endl;
//                 found = true;
//             }
//         }
//     }
//     if(!found)
//     {
//         cout << "Target " << target << " not found in the array." << endl;
//     }
// }
// int main()
// {
//     int row,col,arr[20][20],target;
//     cout << "enter the row = ";
//     cin >> row;
//     cout << "enter the col = ";
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout <<"[" << i <<"]" << " " <<"[" << j <<"]" <<" "<< "index =";
//             cin >> arr[i][j];
//         }
        
//     }
//     cout << "enter the target = ";
//     cin >> target;
//     search(arr,row,col,target);
// }



// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int r = matrix.size();
//         int c = matrix[0].size();
//         // cout << r << " " << c;
//             int s = 0,e = (r * c)- 1;
//             while(s <= e)
//             {
//             int mid = s + ( e - s ) / 2;
//                 if(matrix[mid / c][mid % c] == target)
//                 {
//                     return true;
//                 }
//                 else if(matrix[mid / c][mid % c]  > target)
//                 {
//                     e = mid - 1;
//                 }
//                 else
//                 {
//                     s = mid + 1;
//                 }
//             }
//         return false;
//     }
// };






// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int r = matrix.size();
//         int c = matrix[0].size();
//         // cout << r << " " << c;
//         for(int i = 0; i < c; i++)
//         {
//             int s = 0,e = r - 1;
//             int mid = s + ( e - s ) / 2;
//             while(s < e)
//             {
//                 if(matrix[i][mid] == target)
//                 {
//                     return true;
//                 }
//                 else if(matrix[i][mid] > target)
//                 {
//                     e = mid - 1;
//                 }
//                 else
//                 {
//                     s = mid + 1;
//                 }
//             }
//         }
//         return false;
//     }
// };