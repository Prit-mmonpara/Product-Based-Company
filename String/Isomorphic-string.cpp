
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> m, m1;

        for(int i = 0; i < s.length(); i++)
            m[s[i]].push_back(i);

        for(int i = 0; i < t.length(); i++)
            m1[t[i]].push_back(i);

        for(int i = 0; i < s.length(); i++)
            if(m[s[i]] != m1[t[i]])
                return false;

        return true;        
    }
};

