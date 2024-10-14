class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxSum = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);

            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxSum;
    }
};

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int currentSum = nums[0];
        int maxSum = nums[0];
        for (int i = 1; i < n; i++)
        {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(currentSum, maxSum);
        }
        return maxSum;
    }
};