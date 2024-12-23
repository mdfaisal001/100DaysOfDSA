class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        vector<int> vec(n + 1, 0);
        if (n == 1)
            return 1; // edge case
        for (int i = 0; i < trust.size(); i++)
        {
            vec[trust[i][0]]--; // decrement the inbound
            vec[trust[i][1]]++; // increment the outbound
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (vec[i] == n - 1)
                return i;
        }
        return -1;
    }
};