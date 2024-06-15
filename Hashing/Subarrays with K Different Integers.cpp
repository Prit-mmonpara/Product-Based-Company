
class Solution {
    int subarrayAtMostK(vector<int> &nums, int k)
    {
        int i = 0;
        int ans = 0;
        unordered_map<int, int> freq;

        for(int j = 0; j < nums.size(); j++)
        {
            freq[nums[j]]++;

            while(freq.size() > k)
            {
                freq[nums[i]]--;
                if(freq[nums[i]] == 0)
                    freq.erase(nums[i]);
                i++;
            }
            ans += (j - i) + 1;
        }

        return ans;
    }

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans1 = subarrayAtMostK(nums, k);
        int ans2 = subarrayAtMostK(nums, k - 1);
        return (ans1 - ans2);                
    }
};

