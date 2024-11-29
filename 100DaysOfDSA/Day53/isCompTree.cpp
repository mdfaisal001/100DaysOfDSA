class Solution
{
public:
    bool isCompleteTree(TreeNode *root)
    {
        queue<TreeNode *> que;
        bool flag = false;
        que.push(root);
        if (!root)
            return true;
        while (!que.empty())
        {
            int n = que.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *currNode = que.front();
                que.pop();
                if (!currNode)
                {
                    flag = true;
                }
                else
                {
                    if (flag)
                    {
                        if (currNode)
                            return false;
                    }
                }
            }
        }
        return true;
    }
}