class Solution
{
private:
    int findHeight(TreeNode *root, int level, vector<int> &nodeLevel, vector<int> &nodeHeight, vector<pair<int, int>> &top2_height)
    {
        if (!root)
            return 0;

        int left = findHeight(root->left, level + 1, nodeLevel, nodeHeight, top2_height);
        int right = findHeight(root > right, level + 1, nodeLevel, nodeHeight, top2_height);

        int height = 1 + max(left, right); // find height of the tree;
        nodeLevel[root->val] = level;      /* store the level of the currnt node in nodelevl vec*/
        nodeHeight[root->val] = height;    // store the height in nodeHeight;
        if (height > top2_height[level].first)
        {
            /* if the current height greater then the first tallest height, change the first tallest height to second tallest and update the first tallest height with current height */
            top2_height[level].second = top2_height[level].first;
            top2_height[level].first = height;
        }
        else if (height > top2_height[level].second)
        {
            top2_height[level].second = height;
            /*if the current height greater than the second height in topp2 simply update the current height to second height*/
        }
        return height; // return height because we're finding height
    }

public:
    vector<int> treeQueries(TreeNode *root, vector<int> &queries)
    {
        int n = 100001;                                // max no of nodes
        vector<int> nodeLevel(n, -1);                  // vec to store level
        vector<int> nodeHeight(n, 0);                  // vec to stre nodeHeight
        vector<int> result;                            // result vec
        vector<pair<int, int>> top2_height(n, {0, 0}); // vector of pair to store max hei

        findHeight(root, 0, nodeLevel, nodeHeight, top2_height); // computing heights

        for (int query : queries)
        {                                   // traverse through query
            int level = nodeLevel[query];   // get the level;
            int height = nodeHeight[query]; // get the height;
            int maxHeight = (top2_height[level].first == height) ? top2_height[level].second : top2_height[level].first;
            /* if the first tallest height is equal to querys height then return the second tallest hegiht,because the first tallest is the deleted subtree; or else
       simply return the first tallest;*/
            int updatedHeight = (maxHeight + level) - 1; /*l  imp*** keynote

                to find the height of the tree after some query removal , add the maxHeight and its level , the -1 is because of zero order numbering

                */
            result.push_back(updatedHeight);
        }
        return result;
    }
};