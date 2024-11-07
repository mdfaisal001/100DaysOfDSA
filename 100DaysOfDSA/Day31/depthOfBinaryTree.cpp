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
    int maxDepth(TreeNode *root)
    {
        queue<TreeNode *> que;
        if (root == NULL)
            return 0;
        que.push(root);
        int count = 0;
        while (!que.empty())
        {
            int n = que.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *node = que.front();
                que.pop();
                if (node->left != NULL)
                    que.push(node->left);
                if (node->right != NULL)
                    que.push(node->right);
            }
            count++;
        }
        return count;
    }
};

class Solution
{
private:
    int findMaxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int ltree = findMaxDepth(root->left);
        int rtree = findMaxDepth(root->right);
        return 1 + max(ltree, rtree);
    }

public:
    int maxDepth(TreeNode *root)
    {
        return findMaxDepth(root);
    }
};