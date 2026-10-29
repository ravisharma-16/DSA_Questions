// class Solution {
// public:
//     int peakValleyDifference(vector<int>& nums) {
//         int peak = 0,valley = 0;
//         for(int i = 1; i < nums.size()-1; i++)
//         {
//             if(nums[i-1] < nums[i] && nums[i + 1] < nums[i])
//             {
//                 peak += nums[i];
//             }
//             else if(nums[i-1] > nums[i] && nums[i + 1] > nums[i])
//             {
//                 valley += nums[i];
//             }
//         }
//         return peak - valley;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peak = 0, valley = 0;
        int n = nums.size();
        for (int i = 1; i < n - 1; i++) {
            if (nums[i-1] < nums[i] && nums[i+1] < nums[i])
                peak += nums[i];
            else if (nums[i-1] > nums[i] && nums[i+1] > nums[i])
                valley += nums[i];
        }
        return peak - valley;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 3, 7, 2, 9};
    cout << sol.peakValleyDifference(nums) << endl;   // ← PRINT
    return 0;
}