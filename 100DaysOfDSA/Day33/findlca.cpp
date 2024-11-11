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
    TreeNode *findLCA(TreeNode *&root, TreeNode *&p, TreeNode *&q)
    {
        if (!root)
            return NULL;
        if (root == p || root == q)
            return root;
        ;

        TreeNode *leftTree = findLCA(root->left, p, q);
        TreeNode *rightTree = findLCA(root->right, p, q);
        if (leftTree != NULL && rightTree != NULL)
            return root;
        else if (leftTree != NULL)
            return leftTree;
        else
            return rightTree;
    }

public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        return findLCA(root, p, q);
    }
};