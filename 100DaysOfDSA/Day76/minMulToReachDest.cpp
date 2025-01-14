class Solution
{
public:
    int minimumMultiplications(vector<int> &arr, int start, int end)
    {
        vector<int> steps(100000, 1e9);
        queue<pair<int, int>> que;
        steps[start] = 0;
        if (start == end)
            return 0;
        que.push({0, start});
        while (!que.empty())
        {
            int node = que.front().second;
            int dist = que.front().first;
            que.pop();
            for (auto it : arr)
            {
                int mod = (node * it) % 100000;
                if (mod == end)
                    return dist + 1;
                if (dist + 1 < steps[mod])
                {
                    steps[mod] = dist + 1;
                    que.push({steps[mod], mod});
                }
            }
        }
        return -1;
    }
};
