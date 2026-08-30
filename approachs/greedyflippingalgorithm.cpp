#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int minOperations(vector<int>& arr) {
           int n = arr.size(),j = 0;
           int count = 0;
           while(j <= n - 3)
           {
            if(arr[j] == 0)
            {
                arr[j] = 1 - arr[j];
                arr[j + 1] = 1 - arr[j + 1];
                arr[j + 2] = 1 - arr[j + 2];
             count++;
            }
            j++;
           }
           return ((arr[n - 2] == 0) || (arr[n - 1] == 0)) ? -1 : count;
        }
    };

    int main() {
        Solution s;
        vector<int> arr = {1, 0, 1, 0, 1};
        cout << s.minOperations(arr) << endl;
        return 0;
    }
// Output: 3
    