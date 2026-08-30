#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0)
            {
                m[nums[i]] = i;
            }
        }
        return m.size();
    }
};