class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> result;
        if (!root)
            return result;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty())
        {
            int n = que.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *currNode = que.front();
                que.pop();
                if (i == n - 1)
                {
                    result.push_back(currNode->val);
                }
                if (currNode->left)
                    que.push(currNode->left);
                if (currNode->right)
                    que.push(currNode->right);
            }
        }
        return result;
    }
};