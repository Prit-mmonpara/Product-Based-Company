
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int prev = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == prev)
                return prev;
            else
            {
                prev = nums[i];
            }
        }

        return -1;
    }
};
