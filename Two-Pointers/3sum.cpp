
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        map<vector<int>, int> m;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;
            
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(0 == sum)
                {
                    if(0 == m[{nums[i], nums[j], nums[k]}])
                        m[{nums[i], nums[j], nums[k]}]++;
                    j++;
                    k--;
                }
                else if(sum > 0)
                    k--;
                else
                    j++;
            }
        }

        for(auto it : m)
            ans.push_back(it.first);
        return ans;
    }
};
