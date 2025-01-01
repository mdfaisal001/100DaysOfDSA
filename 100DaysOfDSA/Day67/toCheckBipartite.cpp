class Solution
{
private:
    bool bfs(vector<vector<int>> &graph, queue<int> que, vector<int> &colored)
    {

        while (!que.empty())
        {
            int parent = que.front();
            que.pop();
            // exploring the childrens
            for (int val : graph[parent])
            {
                if (colored[val] == -1)
                {
                    colored[val] = !colored[parent];
                    que.push(val); // if the children is uncolored mark the oppostie of parent color
                }
                else if (colored[val] == colored[parent])
                {
                    return false; // if the child have the parent color its not a bipartita
                    // return falsa because no adjacent node have same color
                }
            }
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();
        queue<int> que;
        bool flag = false;
        // for multiple components
        vector<int> colored(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (colored[i] == -1)
            {
                colored[i] = 0;
                que.push(i);
            }
            if (!bfs(graph, que, colored))
                return false; // if bfs fails its not a bipartite
        }
        return true; // else bipartite
    }
};