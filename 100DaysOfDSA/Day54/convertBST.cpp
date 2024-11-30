class Solution
{
private:
    TreeNode *dfs(vector<int> &nums, int low, int high)
    {
        if (low > high)
        {
            return NULL; // if the low greater than high return NULL
        }
        int mid = low + (high - low) / 2;         // basic binary search idea ,find mid
        TreeNode *root = new TreeNode(nums[mid]); // add the nums[mid] to the node
        root->left = dfs(nums, low, mid - 1);     // continue this proces by dividing the left
        root->right = dfs(nums, mid + 1, high);   // continue this process by diving the right
        return root;
    }

public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int n = nums.size();
        return dfs(nums, 0, n - 1);
    }
};