class Solution
{
private:
    void dfs(TreeNode *root, set<int> &set)
    {
        if (!root)
            return;
        dfs(root->left, set);
        dfs(root->right, set);
        set.insert(root->val);
    }

public:
    int findSecondMinimumValue(TreeNode *root)
    {
        set<int> set;
        dfs(root, set);
        vector<int> result(set.begin(), set.end());
        int n = result.size();
        if (n < 2)
            return -1;
        return result[1];
    }
};