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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true;
        if ((!p && q) || (p && !q))
            return false;
        queue<TreeNode *> que;
        que.push(p);
        que.push(q);
        while (!que.empty())
        {
            TreeNode *tree1 = que.front();
            que.pop();
            TreeNode *tree2 = que.front();
            que.pop();
            if (tree1->val != tree2->val)
                return false;
            if (tree1->left && tree2->left)
            {
                que.push(tree1->left);
                que.push(tree2->left);
            }
            else if (tree1->left || tree2->left)
                return false;
            if (tree1->right && tree2->right)
            {
                que.push(tree1->right);
                que.push(tree2->right);
            }
            else if (tree1->right || tree2->right)
                return false;
        }

        return true;
    }
};

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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true;
        if (!p || !q)
            return false;
        if (p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};