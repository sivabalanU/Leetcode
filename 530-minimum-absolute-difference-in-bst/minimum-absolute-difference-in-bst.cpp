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
int prev = -1;
int ans  = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return ans;
    }
    void inorder(TreeNode* root)
    {
        if(root ==  nullptr)
        {
            return;
        }
        if(root->left != nullptr)
        {
            inorder(root->left);
        }
        if(prev != -1)
        {
            ans = min(abs(prev-root->val),ans);
        }
        
        prev = root->val;
        if(root->right != nullptr)
        {
            inorder(root->right);
        }
    }
};