
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int i = 0;
       int j = 0;

       int maxi = 0;
       unordered_map<int, int> freq;
       
       for(j; j < nums.size(); j++)
       {
            freq[nums[j]]++;

            while(freq[nums[j]] > k && i < j)
            {
                freq[nums[i]]--;
                if(freq[nums[i]] == 0)
                    freq.erase(nums[i]);
                i++;
            }

            maxi = max(maxi, j - i + 1);
       }

       return maxi;
    }
    
};
