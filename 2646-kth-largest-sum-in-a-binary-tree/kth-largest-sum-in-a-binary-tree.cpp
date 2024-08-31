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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        priority_queue<long long> pq;
        while(!q.empty())
        {
            int n = q.size();
            long long sum =0;
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
                sum += node->val;
            }
            pq.push(sum);
        }
        if(pq.size() < k)
        {
            return -1;
        }
        for(int i=1;i<k;i++)
        {
              pq.pop();
        }
        return pq.top();
    }
};