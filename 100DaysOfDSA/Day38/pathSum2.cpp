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
    void findPathSum(TreeNode *root, int targetSum, vector<int> &ans,
                     vector<vector<int>> &result, int currentSum)
    {
        if (!root)
            return;
        ans.push_back(root->val); // adding element to the path
        currentSum += root->val;  // storing the current sum

        if (!root->left && !root->right && currentSum == targetSum)
        {
            result.push_back(ans); // pushback if the target found
        }
        else
        {
            findPathSum(root->left, targetSum, ans, result, currentSum);
            findPathSum(root->right, targetSum, ans, result, currentSum);
        }
        ans.pop_back(); // backtracking
        currentSum -= root->val;
    }

public:
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<int> ans;
        vector<vector<int>> result;
        int currentSum = 0;
        findPathSum(root, targetSum, ans, result, currentSum);
        return result;
    }
};