class Solution
{
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int> vis(V, 0);
        int sum = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});

        while (!pq.empty())
        {
            int weight = pq.top().first;
            intnode = pq.top().second;
            pq.pop();
            if (vis[node])
                continue;
            vis[node] = 1;
            sum += weight;
            // if they ask span tree add the parent
            for (auto it : adj[node])
            {
                int adjNode = it[0];
                int edj = it[1];
                if (!vis[adjNode])
                {
                    pq.push({edj, adjNode});
                }
            }
        }
        return sum;
    }
};