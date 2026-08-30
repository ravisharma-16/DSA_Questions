
// Moore's Voting Algorithm


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0,prev = nums[0];
        for(int i = 0; i < n; i++)
        {
            if(count == 0)
            {
                prev = nums[i];
                count = 1;
            }
            else if(nums[i] == prev)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return prev;
    }
};