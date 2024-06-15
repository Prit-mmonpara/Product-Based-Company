
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        //vector<int> temp;
        sort(nums.begin(), nums.end());

        map<int, int> m;
        // for(auto it : nums)
        //     m[it]++;
        
        // int i = nums[0];
        // while(temp.size() != nums.size())
        // {
        //     if(!m[i])
        //         temp.push_back(i);
        //     i++;
        // }

        // for(auto it : temp)
        //     cout << it << " ";

        // int j = 0;
        // int sum = 0;
        // for(int i = 1; i < nums.size(); i++)
        // {
        //     if(nums[i] == nums[i - 1])
        //     {
        //         sum += abs(nums[i] - temp[j]);
        //         j++;
        //     }
        // }

        // return sum;

        int sum = 0;
        m[nums[0]]++;
        vector<int> temp;
        temp.push_back(nums[0]);

        for(int i = 1; i < nums.size(); i++)
        {
            if(m[nums[i]])
            {
                temp.push_back(temp[i - 1] + 1);
                m[temp[i - 1] + 1]++;
            }
            else
            {
                m[nums[i]]++;
                temp.push_back(nums[i]);
            }
        }

        for(auto it : temp)
            cout << it << " ";

        for(int i = 0; i < nums.size(); i++)
            sum += abs(temp[i] - nums[i]);
        
        return sum; 
    }
};
