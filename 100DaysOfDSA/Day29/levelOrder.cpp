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
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        queue<TreeNode *> que;
        if (root == NULL)
            return result;
        que.push(root);

        while (!que.empty())
        {
            vector<int> temp;
            int n = que.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *node = que.front();
                que.pop();
                temp.push_back(node->val);
                if (node->left != NULL)
                    que.push(node->left);
                if (node->right != NULL)
                    que.push(node->right);
            }
            result.push_back(temp);
        }
        return result;
    }
};