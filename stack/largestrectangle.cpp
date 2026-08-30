#include <iostream>
#include <stack>
#include <vector>
#include <stdlib.h>
using namespace std;
vector<int> nextsmaller(vector<int>&arr,int n)
{
    stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            int check = arr[i];
            while (st.top() != -1 && arr[st.top()] >= check) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
}
vector<int> prevsmaller(vector<int>&arr,int n)
{
    stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int check = arr[i];
            while (st.top() != -1 && arr[st.top()] >= check) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
}
int largestRectangle(vector<int>&arr, int col)
{
    int n = col;
    int area = INT32_MIN;
    vector<int> next(n);
    next = nextsmaller(arr, n);

    vector<int> prev(n);
    prev = prevsmaller(arr, n);
    for (int i = 0; i < n; i++)
    {
        int l = arr[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newarea = l * b;
        area = max(area, newarea);
    }
    return area;
}
int main()
{
    int row, col;
    cout << "enter the row = ";
    cin >> row;
    cout << "enter the col = ";
    cin >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the value of arr[" << i << "][" << j << "] => ";
            cin >> arr[i][j];
        }
    }
    int area = largestRectangle(arr[0], col);
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = arr[i][j] + arr[i - 1][j];
            }
        }
        int check = largestRectangle(arr[i], col);
        if (area < check)
        {
            area = check;
        }
    }
    cout << "area = " << area;
}