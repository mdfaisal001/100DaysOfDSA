class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        dist[0][0] = 1;
        queue<pair<int, pair<int, int>>> que;
        if (grid[0][0] == 1)
            return -1;
        grid[0][0] = 1;
        que.push({1, {0, 0}});
        while (!que.empty())
        {
            auto row = que.front().second.first;
            auto col = que.front().second.second;
            int weight = que.front().first;
            que.pop();
            if (row == n - 1 && col == n - 1)
                return weight;
            for (int delrow = -1; delrow <= 1; delrow++)
            {
                for (int delcol = -1; delcol <= 1; delcol++)
                {
                    int nrow = row + delrow;
                    int ncol = col + delcol;

                    if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < n && grid[nrow][ncol] == 0)
                    {
                        if (weight + 1 < dist[nrow][ncol])
                        {
                            dist[nrow][ncol] = weight + 1;
                            grid[nrow][ncol] = 1;
                            que.push({dist[nrow][ncol], {nrow, ncol}});
                        }
                    }
                }
            }
        }
        return -1;
    }
};