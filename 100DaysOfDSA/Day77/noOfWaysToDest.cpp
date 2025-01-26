class Solution
{
public:
    int countPaths(int n, vector<vector<int>> &roads)
    {
        vector<vector<pair<int, int>>> adj(n);
        for (auto val : roads)
        {
            adj[val[0]].push_back({val[1], val[2]});
            adj[val[1]].push_back({val[0], val[2]});
        }
        vector<long long> dist(n, LONG_MAX);
        int mod = 1e9 + 7;
        vector<int> ways(n, 0);
        ways[0] = 1;
        dist[0] = 0;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0, 0});
        while (!pq.empty())
        {
            int node = pq.top().second;
            long long distance = pq.top().first;
            pq.pop();

            for (auto it : adj[node])
            {
                int adjNode = it.first;
                int weight = it.second;
                if (distance + weight < dist[adjNode])
                {
                    dist[adjNode] = distance + weight;
                    pq.push({dist[adjNode], adjNode});
                    ways[adjNode] = ways[node] % mod;
                }
                else if (distance + weight == dist[adjNode])
                {
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
                }
            }
        }
        return ways[n - 1] % mod;
    }
};

/* intuition we dont need to calculate how many shortest path come to the end; here is a tricky algo 
if 5 have two ways then adjacent node connected to it have the same path for it, if same distance
coming for same path the paths way should be added by the adjacent equal weight;

ways[node] = ways[node1] + ways[node2] + ways[node3] ; dividing the problems in to sub.. 
Where, ways[node1], ways[node2], and ways[node3] are the number of shortest paths possible to node1, node2, and node3 respectively from the source node, the sum of which is the total possible shortest paths and that can be hence greater than 3.
