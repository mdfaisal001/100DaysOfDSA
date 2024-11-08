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
    int findBalanced(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int ltree = findBalanced(root->left);
        if (ltree == -1)
            return -1;
        int rtree = findBalanced(root->right);
        if (rtree == -1)
            return -1;
        if (abs(ltree - rtree) > 1)
            return -1;

        return 1 + max(ltree, rtree);
    }

public:
    bool isBalanced(TreeNode *root)
    {
        return findBalanced(root) != -1;
    }
};