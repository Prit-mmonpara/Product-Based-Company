
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());

        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(count && s[i] == ' ')
                break;
            if(s[i] != ' ')
                count++;
        }
        return count;
    }
};

