/* Algorithm
  1.find the adjacecny fromthe time vec,
  2. calcuate all the distance from the source node using dijkstra's algo
  3.find the max dis;*/
class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<int> dist(n + 1);                                                            // distance vec
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min heap
        vector<vector<pair<int, int>>> adj(n + 1);                                          // for adjacency list;
        // creating adjacency list
        for (auto val : times)
        {
            adj[val[0]].push_back({val[2], val[1]});
        }
        // mark all elements of dist to max value;
        for (int i = 1; i <= n; i++)
        {
            dist[i] = 1e9; // or INT_MAX;
        }
        dist[k] = 0;
        pq.push({0, k}); // pushin the source along with its index for further calculation
        while (!pq.empty())
        {
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for (auto &it : adj[node])
            {

                int edgeWeight = it.first;
                int adjnode = it.second;

                if (dis + edgeWeight < dist[adjnode])
                {
                    /* if the nodes dis + the adj's edgeweight < max num then its tht short path mark dis[adjnode] as newdistace;*/
                    dist[adjnode] = dis + edgeWeight;
                    pq.push({dist[adjnode], adjnode});
                }
            }
        }
        // calculating max time from the distance;
        int maxtime = 0;
        for (int k = 1; k <= n; k++)
        {
            if (dist[k] == 1e9)
                return -1;
            maxtime = max(maxtime, dist[k]);
        }
        return maxtime;
    }
};