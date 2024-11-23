class Solution
{
private:
    TreeNode *constructTree(vector<int> &inorder, vector<int> &postorder, int is, int ie, int ps,
                            int pe, map<int, int> &map)
    {
        if (is > ie || ps > pe)
            return NULL;
        int lastElem = postorder[pe];
        TreeNode *root = new TreeNode(lastElem);
        int elemIndex = map[lastElem];
        int leftTree = elemIndex - is;
        int rightTree = ps + leftTree;
        root->left = constructTree(inorder, postorder, is, elemIndex - 1, ps, ps + leftTree - 1, map);
        root->right = constructTree(inorder, postorder, elemIndex + 1, ie, rightTree, pe - 1, map);
        return root;
    }

public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int inorderSize = inorder.size();
        int postorderSize = postorder.size();
        map<int, int> map;
        for (int i = 0; i < inorderSize; i++)
        {
            map[inorder[i]] = i;
        }
        return constructTree(inorder, postorder, 0, inorderSize - 1, 0, postorderSize - 1, map);
    }
};