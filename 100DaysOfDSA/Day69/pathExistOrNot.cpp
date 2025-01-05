class Solution
{
private:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj)
    {
        vis[node] = 1;
        for (auto val : adj[node])
        {
            if (!vis[val])
            {
                dfs(val, vis, adj);
            }
        }
    }

public:
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        vector<int> vis(n, 0);
        vector<vector<int>> adj(n);

        for (auto neighbor : edges)
        {
            adj[neighbor[0]].push_back(neighbor[1]);
            adj[neighbor[1]].push_back(neighbor[0]);
        }

        dfs(source, vis, adj);
        if (vis[destination] == 1)
        {
            return true;
        }
        return false;
    }
};