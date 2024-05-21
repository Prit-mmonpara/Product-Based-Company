
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        unordered_map<char, int> m;
        int maxi = 0;
        
        for(int j = 0; j < s.length(); j++)
        {
            m[s[j]]++;

            if(m[s[j]] > 1 && i < j)
            {
                while(m[s[j]] > 1 && i < j)
                {
                    m[s[i]]--;
                    if(m[s[i]] == 0)
                        m.erase(s[i]);
                    
                    i++;
                }
            }

            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};
