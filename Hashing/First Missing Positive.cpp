
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxi = 1;
        for(auto it : nums)
        {
            freq[it]++;
            maxi = max(maxi, it);
        }

        for(int i = 1; i <= maxi; i++)
            if(freq[i] == 0)
                return i;

        return maxi + 1;
    }
};

