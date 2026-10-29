// class Solution {
//     bool PrimeNum(int val)
//     {
//     if(val <= 1)
//     {
//         return false;
//     }
//     if(val == 2)
//     {
//         return true;
//     }
//     if(val %2 == 0)
//     {
//         return false;
//     }
//         for(int i = 3; i*i <= val; i+=2)
//         {
//             if(val % i == 0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
//     bool completePrime(int num) {
//         if(num < 0)
//         {
//             return false;
//         }
//         bool check = PrimeNum(num);
//         while(num > 0)
//         {
//             int val = num % 10;
            
//             if(!PrimeNum(val))
//             {
//                 return false;
//             }
//             num /= 10;
//         }
//         return true && check;
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