#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& arr, int k) {
            int count = 0;
            int n = arr.size(); 
            for(int l = 0; l < k - 1; l++)
            {
                arr.push_back(arr[l]);
            }
    
            int size = n + (k - 1);
            int i = 0, j = 1;
            while (j < size)
            {
               if (arr[j] == arr[j - 1]) // condition to check if the group is alternating
               {
                    i = j;  
                    j++;
                    continue;
                }
    
                if(j - i + 1 == k)  // condition to check if the group is of size k
                {
                    count++;
                    i++;
                }
                j++;
            }
            return count;
        }
    };
    int main() {
        Solution s;
        vector<int> arr = {1, 0, 1, 0, 1};
        int k = 3;
        cout << s.numberOfAlternatingGroups(arr, k) << endl;
        return 0;
    }

