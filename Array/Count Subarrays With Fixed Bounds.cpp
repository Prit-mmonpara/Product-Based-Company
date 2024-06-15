
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int bad_idx = -1, left = -1, right = -1;

        for(int i = 0; i < nums.size(); i++)
        {
            if(minK > nums[i] || nums[i] > maxK)
                bad_idx = i;
            
            if(minK == nums[i])
                left = i;
            
            if(maxK == nums[i])
                right = i;
            
            ans += max(0, min(left, right) - bad_idx);
        }

        return ans;
    }
};

