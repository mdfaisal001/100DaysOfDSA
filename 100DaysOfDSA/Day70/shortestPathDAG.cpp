class Solution
{
private:
    void topoSort(int node, vector<vector<pair<int, int>>> adj, vector<int> &vis, stack<int> &st)
    {
        vis[node] = 1;
        for (auto neighbor : adj[node])
        {
            if (!vis[neighbor.first])
            {
                topoSort(neighbor.first, adj, vis, st);
            }
        }
        st.push(node);
    }

public:
    vector<int> shortestPath(int V, int E, vector<vector<int>> &edges)
    {
        vector<int> vis(V, 0);
        vector<int> dist(V, INT_MAX);
        vector<vector<pair<int, int>>> adj(V);
        for (auto val : edges)
        {
            int source = val[0];
            int dest = val[1];
            int wei = val[2];
            adj[source].push_back({dest, wei});
        }
        stack<int> st;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                topoSort(i, adj, vis, st);
            }
        }
        dist[0] = 0;
        while (!st.empty())
        {
            int node = st.top();
            st.pop();
            for (auto iter : adj[node])
            {
                int nei = iter.first;
                int weight = iter.second;

                if (dist[node] != INT_MAX && dist[node] + weight < dist[nei])
                {
                    dist[nei] = dist[node] + weight;
                }
            }
        }

        for (int i = 0; i < V; i++)
        {
            if (dist[i] == INT_MAX)
            {
                dist[i] = -1;
            }
        }
        return dist;
    }
};