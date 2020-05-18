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
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(root)
        {
            if(val > root -> val)
            {
                //cout << "loop 1" << endl;
                return searchBST(root -> right, val);
            }
            
            if(val < root -> val)
            {
                //cout << "loop 2" << endl;
                return searchBST(root -> left, val);
            }
            
            if(val == root -> val)
            {
                //cout << "Present" << endl;
                return root;
            }
        }
        
        return NULL;
        
    }
};