class Solution
{
public:
    vector<int> shortestPath(int n, int m, vector<vector<int>> &edges)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<vector<pair<int, int>>> adj(n + 1);
        vector<int> parent(n + 1);
        for (auto val : edges)
        {
            adj[val[0]].push_back({val[1], val[2]});
            adj[val[1]].push_back({val[0], val[2]});
        }
        for (int i = 1; i <= n; i++)
            parent[i] = i;
        vector<int> dist(n + 1, 1e9);
        dist[1] = 0;
        pq.push({0, 1});

        while (!pq.empty())
        {
            auto it = pq.top();
            int dis = it.first;
            int node = it.second;
            pq.pop();

            for (auto &edge : adj[node])
            {
                int dest = edge.first;
                int weight = edge.second;

                if (dis + weight < dist[dest])
                {
                    dist[dest] = dis + weight;
                    pq.push({dist[dest], dest});
                    parent[dest] = node;
                }
            }
        }
        if (dist[n] == 1e9)
            return {-1};
        int target = n;
        vector<int> path;
        while (parent[target] != target)
        {
            path.push_back(target);
            target = parent[target];
        }
        path.push_back(1);
        path.push_back(dist[n]);
        reverse(path.begin(), path.end());
        return path;
    }
};