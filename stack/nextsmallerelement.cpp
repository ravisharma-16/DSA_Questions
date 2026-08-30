#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void countSmaller(vector<int> &nums)
{
    stack<int> st;
    st.push(0);
    vector<int> ans;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        int check = nums[i];
        while (st.top() >= check)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(check);
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int size;
    cout << "enter the size = ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << i << " " << " = ";
        cin >> arr[i];
    }
    countSmaller(arr);
}