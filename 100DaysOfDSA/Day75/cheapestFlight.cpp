// sol 1
class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        vector<vector<pair<int, int>>> adj(n);
        for (auto val : flights)
        {
            int from = val[0];
            int to = val[1];
            int cost = val[2];
            adj[from].push_back({to, cost});
        }
        vector<int> stop(n, INT_MAX);
        vector<int> dist(n, INT_MAX);
        queue<pair<int, pair<int, int>>> que;
        dist[src] = 0;
        stop[src] = 0;
        que.push({0, {src, 0}});
        while (!que.empty())
        {
            int node = que.front().second.first;
            int step = que.front().first;
            int distance = que.front().second.second;
            que.pop();
            if (step > k)
                continue;
            for (auto neighbor : adj[node])
            {
                int adjNode = neighbor.first;
                int weight = neighbor.second;

                if (step + 1 < stop[adjNode] || distance + weight < dist[adjNode])
                {
                    stop[adjNode] = step + 1;
                    dist[adjNode] = distance + weight;
                    que.push({stop[adjNode], {adjNode, dist[adjNode]}});
                }
            }
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};

// sol2
class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        vector<vector<pair<int, int>>> adj(n);
        for (auto val : flights)
        {
            int from = val[0];
            int to = val[1];
            int cost = val[2];
            adj[from].push_back({to, cost});
        }
        vector<int> dist(n, INT_MAX);
        queue<pair<int, pair<int, int>>> que;
        dist[src] = 0;
        que.push({0, {src, 0}});
        while (!que.empty())
        {
            int node = que.front().second.first;
            int step = que.front().first;
            int distance = que.front().second.second;
            que.pop();
            if (step > k)
                continue;
            for (auto neighbor : adj[node])
            {
                int adjNode = neighbor.first;
                int weight = neighbor.second;

                if (distance + weight < dist[adjNode] && step <= k)
                {
                    dist[adjNode] = distance + weight;
                    que.push({step + 1, {adjNode, dist[adjNode]}});
                }
            }
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};