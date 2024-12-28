class Solution
{
public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);
        // creating adjacent list
        for (auto it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }

        // updating indegree
        for (int i = 0; i < numCourses; i++)
        {
            for (auto iter : adj[i])
            {
                indegree[iter]++;
            }
        }

        // adding 0 indegree to queue;
        queue<int> que;
        for (int j = 0; j < numCourses; j++)
        {
            if (indegree[j] == 0)
                que.push(j);
        }
        // find order
        vector<int> orders;
        while (!que.empty())
        {
            int orderedCourse = que.front();
            que.pop();
            orders.push_back(orderedCourse);
            for (int neighbour : adj[orderedCourse])
            {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0)
                    que.push(neighbour);
            }
        }

        return (orders.size() == numCourses) ? orders : vector<int>();
    }
};