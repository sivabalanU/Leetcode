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
    int findSecondMinimumValue(TreeNode* root) {
         long long first = LLONG_MAX;
         long long second = LLONG_MAX;
        inorder(root,first,second);
        if(second ==  LLONG_MAX) return -1;

        return second ;
    }
     void inorder(TreeNode* root,long long& first,long long& second)
     {
        if(root == nullptr)
        {
            return;
        }
        if(root->val < first)
        {
            second = first;
            first = root->val;
        }
        else if(root->val > first && root->val < second)
        {
            second = root->val;
        }
        inorder(root->left,first,second);
        inorder(root->right,first,second);
     }
};