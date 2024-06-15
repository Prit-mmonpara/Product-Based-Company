
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;

        long long product = 1;

        int j = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            product *= nums[i];
            
            if(product >= k)
            {
                while(product >= k && j <= i)
                {
                    product /= nums[j];
                    j++;
                }
            }

            cnt += (i - j + 1);
        }

        return cnt;        
    }
};

