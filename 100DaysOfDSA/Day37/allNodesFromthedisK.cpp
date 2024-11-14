/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
private:
    // dfs for downwards
    void dfs(TreeNode *root, vector<int> &result, int k)
    {
        if (!root || k < 0)
            return;
        if (k == 0)
        {
            result.push_back(root->val);
            return;
        }
        dfs(root->left, result, k - 1);
        dfs(root->right, result, k - 1);
    }
    int findTarget(TreeNode *root, TreeNode *target, vector<int> &result, int k)
    {
        if (!root)
            return -1;
        if (root == target)
        {
            dfs(target, result, k);
            return 0;
        }

        // to find left distance
        int leftDist = findTarget(root->left, target, result, k);
        if (leftDist != -1)
        {

            if ((leftDist + 1 == k))
            {
                result.push_back(root->val);
            }
            else
            {
                dfs(root->right, result, k - leftDist - 2);
            }
            return leftDist + 1;
        }

        // to find right distance
        int rightDist = findTarget(root->right, target, result, k);
        if (rightDist != -1)
        {

            if ((rightDist + 1 == k))
            {
                result.push_back(root->val);
            }
            else
            {
                dfs(root->left, result, k - rightDist - 2);
            }
            return rightDist + 1;
        }
        return -1;
    }

public:
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        vector<int> result;
        findTarget(root, target, result, k);
        return result;
    }
};