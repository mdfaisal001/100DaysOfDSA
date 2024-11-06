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
    void getInorder(TreeNode *&root, vector<int> &result)
    {
        if (root == NULL)
            return;
        getInorder(root->left, result);
        result.push_back(root->val);
        getInorder(root->right, result);
    }

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        getInorder(root, result);
        return result;
    }
};

// preorder
class Solution
{
private:
    void preorderHelper(TreeNode *root, vector<int> &result)
    {
        if (root == NULL)
            return;
        result.push_back(root->val);
        preorderHelper(root->left, result);
        preorderHelper(root->right, result);
    }

public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        preorderHelper(root, result);
        return result;
    }
};

// postorder

class Solution
{
private:
    void getPostOrder(TreeNode *root, vector<int> &result)
    {
        if (root == NULL)
            return;
        getPostOrder(root->left, result);
        getPostOrder(root->right, result);
        result.push_back(root->val);
    }

public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> result;
        getPostOrder(root, result);
        return result;
    }
};