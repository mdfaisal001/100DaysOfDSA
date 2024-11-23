class Solution
{
private:
    void findPathSum(TreeNode *root, int &total, int temp)
    {
        if (!root)
            return;
        temp = temp * 10 + root->val;
        if (!root->left && !root->right)
        {
            total += temp;
            return;
        }
        findPathSum(root->left, total, temp);
        findPathSum(root->right, total, temp);
    }

public:
    int sumNumbers(TreeNode *root)
    {
        int total = 0;
        int temp = 0;
        findPathSum(root, total, temp);
        return total;
    }
};