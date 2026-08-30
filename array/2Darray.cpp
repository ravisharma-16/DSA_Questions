// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20][20], row, col;
//     cout << "enter the row  -> ";
//     cin >> row;
//     cout << "enter the col -> ";
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << i << " " << j << " " << "index ->";
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }

//    SUM OF ROW
// #include <iostream>
// using namespace std;
// int main()
// {
// int arr[20][20], row, col, sum[10], k = 0, max;
// cout << "enter the row  -> ";
// cin >> row;
// cout << "enter the col -> ";
// cin >> col;
// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//         cout << i << " " << j << " " << "index ->";
//         cin >> arr[i][j];
//     }
// }
//     for (int i = 0; i < row; i++)
//     {
//         sum[k] = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum[k] += arr[i][j];
//         }
//         k++;
//         cout << i << " " << "row sum ->" << sum[i] << endl;
//     }
//     max = sum[0];
//     for (int i = 0; i < k; i++)
//     {
//         if (max < sum[i])
//         {
//             max = sum[i];
//         }
//     }
//     cout << "maxmium sum ->" << max << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20][20], row, col, check;
//     cout << "enter the row  -> ";
//     cin >> row;
//     cout << "enter the col -> ";
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         if (i%2==0)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                //top-->bottom
//                cout << "Enter element for arr[" << j << "][" << i << "] = ";
//                cin>>arr[j][i];

//             }

//         }
//          else
//          {
//             for (int j = col-1; j>=0; j--)
//             {
//               //bottom-->top
//               cout << "Enter element for arr[" << j << "][" << i << "] = ";
//               cin>>arr[j][i];
//             }

//          }

//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;

//     }

// }

//              SPRIAL MATRIX
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20][20], row, col;
//     cout << "enter the row  -> ";
//     cin >> row;
//     cout << "enter the col -> ";
//     cin >> col;
//     int top = 0, down = row - 1, total = row * col;
//     int left = 0, right = col - 1, shift = 0; //       using to shifting = 0->left to right,1->top to down,2->right to left,3->down to top
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "[" << i << "]" << " " << "[" << j << "]" << " " << "index ->";
//             cin >> arr[i][j];
//         }
//     }
//     cout << "this is spiral matrix -> ";
//     while (top <= down && left <= right)
//     {
//         if (shift == 0)
//         {
//             for (int i = left; i <= right; i++)
//             {
//                 cout << arr[top][i] << " ";
//             }

//             top++;
//           //  shift++;
//         }
//         else if (shift == 1)
//         {
//             for (int i = top; i <= down; i++)
//             {
//                 cout << arr[i][right] << " ";
//             }
//             right -= 1;
//           //  shift++;
//         }
//         else if (shift == 2)
//         {
//             for (int i = right; i >= left; i--)
//             {
//                 cout << arr[down][i] << " ";
//             }
//             down--;
//             //shift++;
//         }
//         else if (shift == 3)
//         {
//             for (int i = down; i >= top; i--)
//             {
//                 cout << arr[i][left] << " ";
//             }
//             left++;
//         }
//         shift = (shift + 1) % 4;
//     }
// }

//     90 degree

// #include <iostream>
// using namespace std;
// int main()
// {
// int arr[20][20], row, col, arr2[20][20];
// cout << "enter the row  -> ";
// cin >> row;
// cout << "enter the col -> ";
// cin >> col;
// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//         cout << i << " " << j << " " << "index ->";
//         cin >> arr[i][j];
//     }
// }
//     int top = 0, down = row - 1;
//     int left = 0, right = col - 1, shift = 0;
//     cout << "90 degree rotate -> "<<endl;
//     while (top <= down && left <= right)
//     {
//         if (shift == 0)
//         {
//             for (int i = down; i >= top; i--)
//             {
//                 cout << arr[i][left] << "\t";
//             }
//             left++;
//             cout << endl;
//         }
//         else if (shift == 1)
//         {
//             for (int i = down; i >= top; i--)
//             {
//                 cout << arr[i][left] << "\t";
//             }
//             left++;
//             cout << endl;
//         }
//         else if (shift == 2)
//         {
//             for (int i = down; i >= top; i--)
//             {
//                 cout << arr[i][left] << "\t";
//             }
//             left++;
//             cout << endl;
//         }
//         shift = (shift + 1) % 4;
//     }
// }


// 2d vector reverse 90 degree
// class Solution {
//     public:
//         void rotate(vector<vector<int>>& arr) {
//             int n = arr.size();
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = i + 1; j < n; j++)
//                 {
//                     swap(arr[i][j], arr[j][i]);
//                 }
//             }
//             for (int i = 0; i < n; i++)
//             {
//                 reverse(arr[i].begin(), arr[i].end());
//             }
//         }
//     };
    

//     ......................
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[20][20], row, col;

//     cout << "Enter the number of rows -> ";
//     cin >> row;
//     cout << "Enter the number of columns -> ";
//     cin >> col;

//     // Input matrix elements
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << "Element at index [" << i << "][" << j << "] -> ";
//             cin >> arr[i][j];
//         }
//     }

//     // Transpose the matrix
//     for (int i = 0; i < row; i++) {
//         for (int j = i + 1; j < col; j++) {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }

//     // Reverse each row to get the 90-degree rotation
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col / 2; j++) {
//             int temp = arr[i][j];
//             arr[i][j] = arr[i][col - j - 1];
//             arr[i][col - j - 1] = temp;
//         }
//     }

//     // Print the rotated matrix
//     cout << "The matrix after 90-degree clockwise rotation is:\n";
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//     2D ARRAY BINARY SEARCH
// #include <iostream>
// using namespace std;
// int main()
// {
//     bool check;
//     int arr[20][20], row, col, target;
//     cout << "enter the row  -> ";
//     cin >> row;
//     cout << "enter the col -> ";
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << i << " " << j << " " << "index ->";
//             cin >> arr[i][j];
//         }
//     }
//     cout << "enter the finding number -> ";
//     cin >> target;
//     int i = 0, j = 0;
//     while (i < row)
//     {
//         while (j < col)
//         {
//             if (arr[i][j] == target)
//             {
//                 check = true;
//             }
//             else
//             {
//                 check = false;
//             }
//             j++;
//         }
//         i++;
//     }
//     if (check == true)
//     {
//         cout <<"it was giving 1 it mean exist -> "<< check;
//     }
//     else
//     {
//         cout <<"it was giving 0 it mean not exist -> "<< check;
//     }
// }

//           descending order

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20][20], row, col, temp[50], k = 0;
//     cout << "enter the row  -> ";
//     cin >> row;
//     cout << "enter the col -> ";
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << i << " " << j << " " << "index ->";
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {

//             temp[k] = arr[i][j];
//             k++;
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = i + 1; j < k; j++)
//         {
//             if (temp[i] < temp[j])
//             {
//                 int check = temp[i];
//                 temp[i] = temp[j];
//                 temp[j] = check;
//             }
//         }
//     }
//     int index = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             arr[i][j] = temp[index];
//             index++;
//         }
//     }
//     cout<<"descending order -> "<<endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }

//   ascending order
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20][20], row, col, temp[50], k = 0;
// cout << "enter the row  -> ";
// cin >> row;
//     cout << "enter the col -> ";
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << i << " " << j << " " << "index -> ";
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {

//             temp[k] = arr[i][j];
//             k++;
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = i + 1; j < k; j++)
//         {
//             if (temp[i] > temp[j])
//             {
//                 int check = temp[i];
//                 temp[i] = temp[j];
//                 temp[j] = check;
//             }
//         }
//     }
//     int index = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             arr[i][j] = temp[index];
//             index++;
//         }
//     }
//     cout<<"ascending order -> "<<endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i > j)
//             {
//                 cout << 0 << " ";
//             }
//             else if (i == j)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             else
//             {
//                 cout << 1 << " ";
//             }
//         }
//         cout << endl;
//     }
//     cout << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (i > j)
    //         {
    //             arr[i][j] = 0;
    //             cout << arr[i][j] << " ";
    //         }
    //         else if (i == j)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //         else
    //         {
    //             arr[i][j] = 1;
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (i > j)
    //         {
    //             arr[i][j] = 0;
    //         }
    //         else if (i < j)
    //         {
    //             arr[i][j] = 1;
    //         }
    //     }
    // }
//     int i = 0, j = 0;
//     while (i < 3)
//     {
//         j = 0;
//         while (j < 3)
//         {
//             cout << arr[i][j] << " ";
//             j++;
//         }
//         i++;
//         cout << endl;
//     }
// }


