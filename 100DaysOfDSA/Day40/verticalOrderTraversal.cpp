

class Solution
{
private:
    void findDfs(TreeNode *root, int row, int col, map<int, map<int, multiset<int>>> &nodes)
    {
        if (!root)
            return;                                    // base
        nodes[col][row].insert(root->val);             // adding the values in the map
        findDfs(root->left, row + 1, col - 1, nodes);  // traverse left
        findDfs(root->right, row + 1, col + 1, nodes); // traverse right

        // the data will be stored like col:{ row:{2}};
    }
    vector<vector<int>> getVertical(TreeNode *root, map<int, map<int, multiset<int>>> &nodes)
    {
        vector<vector<int>> result; // vec of vec to store all the vectors
        findDfs(root, 0, 0, nodes); // function call
        for (auto &i : nodes)
        {                     // outer map (col)
            vector<int> temp; // temp vec to store the nodes in same col
            for (auto &j : i.second)
            {
                temp.insert(temp.end(), j.second.begin(), j.second.end());
            }
            result.push_back(temp); //  add vector temp in result
        }
        return result;
    }

public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        map<int, map<int, multiset<int>>> nodes;
        return getVertical(root, nodes);
    }
};