
class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v, v2;

        string str = "";
        for(int i = 0; i < version1.length(); i++)
        {
            if(version1[i] == '.')
            {
                v.push_back(stoi(str));
                str = "";
            }
            else
            {
                str += version1[i];
            }
        }
        v.push_back(stoi(str));

        str = "";
        for(int i = 0; i < version2.length(); i++)
        {
            if(version2[i] == '.')
            {
                v2.push_back(stoi(str));
                str = "";
            }
            else
            {
                str += version2[i];
            }
        }
        v2.push_back(stoi(str));

        if(v.size() < v2.size())
        {
            while(v.size() != v2.size())
                v.push_back(0);
        }
        else if(v.size() > v2.size())
        {
            while(v.size() != v2.size())
                v2.push_back(0);
        }

        int cnt1 = 0, cnt2 = 0; 
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] < v2[i])
                return -1;
            else if(v[i] > v2[i])
                return 1;
        }

        return 0;
    }
};
