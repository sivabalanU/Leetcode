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
    TreeNode* reverseOddLevels(TreeNode* root) {
       queue<TreeNode*> q;
       q.push(root);
       int count = 1;
       while(!q.empty())
       {
           int n = q.size();
           vector<TreeNode*> vec;
           for(int i=0;i<n;i++)
           {
               TreeNode* node = q.front();
               q.pop();
               if(node->left != nullptr)
               {
                   q.push(node->left);
               }
               if(node->right != nullptr)
               {
                   q.push(node->right);
               }
               vec.push_back(node);
           }
           if(count % 2 ==0)
           {

                 int i= 0;
                 int j= vec.size() - 1;
                 while(i<j)
                {
                    TreeNode* node1 = vec[i];
                    TreeNode* node2 = vec[j];
                    int value = node1->val;
                    node1->val = node2->val;
                    node2->val = value;
                    i++;
                    j--;
                 }
           }
           count++;
       }
       return root;   
    }
};