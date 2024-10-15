class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxInt = INT_MAX;
        int n = prices.size();
        int maxProfit = 0;
        int mini = maxInt;
        for (int i = 0; i < n; i++)
        {
            mini = min(mini, prices[i]);
            int profit = prices[i] - mini;
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};