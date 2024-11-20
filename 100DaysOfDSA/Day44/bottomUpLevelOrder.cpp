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
private:
    void findLevelOrder(TreeNode *root, vector<vector<int>> &result)
    {
        if (!root)
            return;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty())
        {
            int n = que.size();
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                TreeNode *currNode = que.front();
                que.pop();
                temp.push_back(currNode->val);
                if (currNode->left)
                    que.push(currNode->left);
                if (currNode->right)
                    que.push(currNode->right);
            }
            result.push_back(temp);
        }
    }

public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> result;
        findLevelOrder(root, result);
        int size = result.size();
        reverse(result.begin(), result.end());
        return result;
    }
};