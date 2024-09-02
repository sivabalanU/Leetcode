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
        int node =  root->val;
        Traverse(root,node);
        return count;
    }
    void Traverse(TreeNode* root,int node)
    {
        if(root == nullptr)
        {
            return;
        }
        if(root->val >= node)
        {
            count++;
            node = root->val;
        }
        Traverse(root->left,node);
        Traverse(root->right,node);
    }
};