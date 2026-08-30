#include <iostream>
using namespace std;
int boardnum(char arr[10][10],int r,int c)
{
    int total = 0;
     for (int i = 0; i < r; i++)
     {
        int top = i - 1;
        for (int j = 0; j < c; j++)
        {
          int left = j - 1;
          if(arr[i][j] == 'X' && (top < 0 || arr[top][j] == '.') && (left < 0 || arr[i][left] == '.'))
          {
             total++;
          }
        }
     }
     return total;
}
int main()
{
    char arr[10][10];
    int row, col;
    cout << "Enter the row and column of the board: ";
    cin >> row >> col;
    cout << "Enter the board: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << " " << j << " ";
            cin >> arr[i][j];
        }
    }
    cout << boardnum(arr, row, col);
}