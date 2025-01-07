#include <queue>
#include <climits>

class Solution
{
public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   src: source vertex
     *   V: number of vertices
     */
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        vector<int> dist(V, 1e8);
        dist[src] = 0;
        for (int i = 0; i < V - 1; i++)
        {
            for (auto neighbor : edges)
            {
                int source = neighbor[0];
                int dest = neighbor[1];
                int weight = neighbor[2];
                if (dist[source] != 1e8 && dist[source] + weight < dist[dest])
                {
                    dist[dest] = dist[source] + weight;
                }
            }
        }

        for (auto edge : edges)
        {
            int negSource = edge[0];
            int negDest = edge[1];
            int negWeight = edge[2];
            if (dist[negSource] != 1e8 && dist[negSource] + negWeight < dist[negDest])
            {
                return vector<int>{-1};
            }
        }
        return dist;
    }
};