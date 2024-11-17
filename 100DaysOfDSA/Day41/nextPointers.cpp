class Solution
{
public:
    Node *connect(Node *root)
    {
        if (!root)
            return NULL;
        queue<Node *> que;
        que.push(root);
        while (!que.empty())
        {
            int n = que.size();
            for (int i = 0; i < n; i++)
            {
                Node *currentNode = que.front();
                que.pop();
                if (i < n - 1)
                {
                    currentNode->next = que.front();
                }
                if (currentNode->left != NULL)
                    que.push(currentNode->left);
                if (currentNode->right != NULL)
                    que.push(currentNode->right);
            }
        }
        return root;
    }
};