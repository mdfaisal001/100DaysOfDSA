* /
    class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        queue<TreeNode *> que;
        if (!root)
            return true;
        que.push(root->left);
        que.push(root->right);
        while (!que.empty())
        {
            TreeNode *left = que.front();
            que.pop();
            TreeNode *right = que.front();
            que.pop();
            if (!left && !right)
                continue;
            if (!left || !right || left->val != right->val)
                return false;
            que.push(left->left);
            que.push(right->right);
            que.push(left->right);
            que.push(right->left);
        }
        return true;
    }