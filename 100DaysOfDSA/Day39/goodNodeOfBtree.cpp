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
    int findGoodNode(TreeNode *root, int &count, int maxi)
    {
        if (!root)
            return 0;
        maxi = max(maxi, root->val);
        if (maxi <= root->val)
        {
            count++;
        }

        findGoodNode(root->left, count, maxi);
        findGoodNode(root->right, count, maxi);
        return count;
    }

public:
    int goodNodes(TreeNode *root)
    {
        int count = 0;
        int maxi = root->val;
        return findGoodNode(root, count, maxi);
    }
};