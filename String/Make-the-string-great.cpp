
class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(!st.empty() && (tolower(s[i]) == tolower(st.top())) 
            && (((islower(s[i]) && isupper(st.top())) || (isupper(s[i]) 
            && islower(st.top())))))
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }        
        
        s = "";
        while(!st.empty())
        {
            s += st.top();
            st.pop();
        }

        reverse(s.begin(), s.end());
        return s;
    }
};

