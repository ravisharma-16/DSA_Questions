//   2D sprial matrix in dynamic array using function

#include <iostream>
using namespace std;
void sprialmx(int **arr, int row, int col)
{
    int left = 0, right = col - 1;
    int top = 0, down = row - 1, shift = 0;
    while (left <= right && top <= down)
    {
        if (shift == 0)
        {
            for (int i = top; i <= down; i++)
            {
                cout << arr[top][i] << " ";
            }
            top++;
        }
        else if (shift == 1)
        {
            for (int i = top; i <= down; i++)
            {
                cout << arr[i][down] << " ";
            }
            right--;
        }
        else if (shift == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[down][i] << " ";
            }
            down--;
        }
        else if (shift == 3)
        {
            for (int i = down; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left--;
        }
        shift = (shift + 1) % 4;
    }
}
int main()
{
    int row, col;
    cout << "enter the row = ";
    cin >> row;
    cout << "enter the col = ";
    cin >> col;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << " " << j << " " << "enter the = ";
            cin >> arr[i][j];
        }
    }
    cout << "original array = " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl
         << endl;
    cout << "sprial matrix = " << endl;
    sprialmx(arr, row, col);
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}