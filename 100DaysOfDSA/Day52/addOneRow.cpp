class Solution
{
private:
    TreeNode *dfs(TreeNode *root, int val, int depth, int currentDepth)
    {
        if (!root)
            return nullptr;

        if (currentDepth + 1 == depth)
        {
            /* key -- > the new node of val will add in depth-1, so checking the currentdepth+1 == depth*/
            TreeNode *lnewNode = new TreeNode(val); // new left Node
            TreeNode *rnewNode = new TreeNode(val); // new left Node
            if (root->left && root->right)
            { /* if both left and right child exist  for the root ,point the root's left to new leftnode  and viceversa before that change the root's left child to newNode's left and viceversa*/
                lnewNode->left = root->left;
                rnewNode->right = root->right;
                root->left = lnewNode;
                root->right = rnewNode;
            }
            else if (root->left)
            {

                /*if only left child exist for the root, do the process for left child only but for the root's null right child  point it to the rnewNode but dont need to change the renwNode's right to point root's right because its already null*/
                lnewNode->left = root->left;
                root->left = lnewNode;
                root->right = rnewNode;
            }
            else if (root->right)
            {
                rnewNode->right = root->right;
                root->right = rnewNode;
                root->left = lnewNode; /* above same process for if only right child exist with viceversa;*/
            }
            else
            {
                root->left = lnewNode;
                root->right = rnewNode;
                /* if no left and right child of root point the root's left and right node to the new leftnode and right node*/
            }
            return root; // return to root;
        }
        dfs(root->left, val, depth, currentDepth + 1);
        dfs(root->right, val, depth, currentDepth + 1);
        return root;
    }

public:
    TreeNode *addOneRow(TreeNode *root, int val, int depth)
    {
        int currentDepth = 1;
        if (depth == 1)
        {
            /*if depth is 1 ,logically there is no depth -1 so add the root as a left child of the newnode*/
            TreeNode *node = new TreeNode(val);
            node->left = root;
            return node;
        }
        return dfs(root, val, depth, currentDepth);
    }
};