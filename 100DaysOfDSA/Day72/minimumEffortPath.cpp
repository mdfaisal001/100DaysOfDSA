class Solution
{
public:
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        dist[0][0] = 0;
        pq.push({0, {0, 0}}); // push the first difference and source node;

        while (!pq.empty())
        {
            auto cell = pq.top();
            pq.pop();
            int weight = cell.first;
            int row = cell.second.first;
            int col = cell.second.second;
            if (row == n - 1 && col == m - 1)
                return weight;
            for (int delrow = -1; delrow <= 1; delrow++)
            {
                for (int delcol = -1; delcol <= 1; delcol++)
                {
                    if (abs(delrow) == abs(delcol))
                        continue;
                    int nrow = delrow + row;
                    int ncol = delcol + col;
                    if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m)
                    {
                        // calculate maxdiff of path;
                        int effort = max(abs(heights[row][col] - heights[nrow][ncol]), weight);
                        // if effort < distance of the cell its the shortest path;
                        if (effort < dist[nrow][ncol])
                        {
                            dist[nrow][ncol] = effort;
                            pq.push({effort, {nrow, ncol}});
                        }
                    }
                }
            }
        }
        return 0;
    }
};