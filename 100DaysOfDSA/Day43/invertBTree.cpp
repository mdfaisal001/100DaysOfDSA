

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
            return NULL;

        TreeNode *left = invertTree(root->left);   // left node
        TreeNode *right = invertTree(root->right); // right node
        root->left = right;                        // swapping
        root->right = left;                        // swapping when the call stack ends
        return root;
    }
};