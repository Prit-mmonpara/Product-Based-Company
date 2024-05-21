
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
*/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(NULL == root)
            return {};
    
        queue<TreeNode *> q;
        q.push(root);
    
        vector<int> v;
        
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                auto it = q.front();
                q.pop();
                
                if(0 == sz)
                    v.push_back(it->val);
                
                if(it->left)
                    q.push(it->left);
                    
                if(it->right)
                    q.push(it->right);
            }
        }
        
        return v;
    }
};
