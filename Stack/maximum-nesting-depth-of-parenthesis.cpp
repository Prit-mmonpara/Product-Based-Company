class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi = 0;

        for(auto it : s)
        {
            if(!st.empty() && it == ')')
                st.pop();
            else if(it == '(')
                st.push('(');
            
            int sz = st.size();
            maxi = max(maxi, sz);
        }

        return maxi;
    }
};