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
    int count =0; 
    int goodNodes(TreeNode* root) {
        Traverse(root,root->val);
        return count;
    }
    void Traverse(TreeNode* root,int cur)
    {
        if(root == nullptr)
        {
            return;
        }
        if(root->val >= cur)
        {
            cur = root->val;
            count++;
        }
        Traverse(root->left,cur);
        Traverse(root->right,cur);
    }
};