class Solution
{
private:
    void bfs(vector<vector<int>> &grid, queue<pair<int, int>> &que, int &count, int &freshOrange)
    {
        int n = grid.size();
        int m = grid[0].size();
        while (!que.empty())
        {
            int s = que.size();
            count++;
            for (int i = 0; i < s; i++)
            {
                auto [row, col] = que.front();
                que.pop();
                for (int delrow = -1; delrow <= 1; delrow++)
                {
                    for (int delcol = -1; delcol <= 1; delcol++)
                    {
                        if (abs(delrow) == abs(delcol))
                            continue;
                        int nrow = row + delrow;
                        int ncol = col + delcol;
                        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1)
                        {
                            grid[nrow][ncol] = 2;
                            que.push({nrow, ncol});
                            freshOrange--;
                        }
                    }
                }
            }
        }
    }

public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int minute = -1;
        int freshOrange = 0;
        queue<pair<int, int>> que;
        // vector<vector<int>> vis(n,vector<int>(m,0));
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (grid[row][col] == 2)
                {
                    que.push({row, col});
                }
                else if (grid[row][col] == 1)
                {
                    freshOrange++;
                }
            }
        }
        if (freshOrange == 0)
            return 0;
        bfs(grid, que, minute, freshOrange);
        return (freshOrange == 0) ? minute : -1;
    }
};