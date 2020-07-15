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
    //int maxDepth;
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL)
        {
            return 0;
        }     
        
        return helper(root);
        
    }
    
    int helper(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int left = helper(root -> left);
        int right = helper(root -> right);
        
        
        return max(left, right) + 1;
    }
};