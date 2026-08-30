// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
// bool know(vector<vector<int>> &arr, int a, int b)
// {
//     if (arr[a][b] == 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int celebrity(vector<vector<int>> &arr)
// {
//     stack<int> s;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         s.push(i);
//     }
//     while (s.size() > 1)
//     {
//         int a = s.top();
//         s.pop();
//         int b = s.top();
//         s.pop();
//         if (know(arr, a, b))
//         {
//             s.push(b);
//         }
//         else
//         {
//             s.push(a);
//         }
//     }
//     int current = s.top();
//     int zerocount = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[current][i] == 0)
//         {
//             zerocount++;
//         }
//     }
//     int onecount = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i][current] == 1)
//         {
//             onecount++;
//         }
//     }
//     if (zerocount == arr.size())
//     {
//         return current;
//     }
//     else if (onecount == arr.size() - 1)
//     {
//         return current;
//     }
//     else
//     {
//         return -1;
//     }
// }
// int main()
// {
//     int row, col;
//     cout << "enter the row = ";
//     cin >> row;
//     cout << "enter the col = ";
//     cin >> col;
//     vector<vector<int>> arr(row, vector<int>(col));
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "enter the value of arr[" << i << "][" << j << "] => ";
//             cin >> arr[i][j];
//         }
//     }
//     cout << "celebrity are = " << celebrity(arr);
// }



// C++ program to find celebrity
// in the given Matrix using two-pointer approach
#include <bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int> >& matrix, int n)
{
    // This function returns the celebrity
    // index 0-based (if any)

    int i = 0, j = n - 1;
    while (i < j) {
        if (matrix[j][i] == 1) // j knows i
            j--;
        else // j doesnt know i so i cant be celebrity
            i++;
    }
    // i points to our celebrity candidate
    int candidate = i;

    // Now, all that is left is to check that whether
    // the candidate is actually a celebrity i.e: he is
    // known by everyone but he knows no one
    for (i = 0; i < n; i++) {
        if (i != candidate) {
            if (matrix[i][candidate] == 0
                || matrix[candidate][i] == 1)
                return -1;
        }
    }
    // if we reach here this means that the candidate
    // is really a celebrity
    return candidate;
}

int main()
{
    int n = 4;
    vector<vector<int> > matrix = { { 0, 0, 1, 0 },
                                    { 0, 0, 1, 0 },
                                    { 0, 0, 0, 0 },
                                    { 0, 0, 1, 0 } };

    int celebIdx = celebrity(matrix, n);

    if (celebIdx == -1)
        cout << ("No Celebrity");
    else {
        cout << "Celebrity ID " << celebIdx;
    }
    return 0;
}