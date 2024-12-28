class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> indegree(numCourses, 0);
        vector<vector<int>> adj(numCourses);

        // creating adjacency list
        for (auto val : prerequisites)
        {
            adj[val[1]].push_back(val[0]);
        }
        for (int i = 0; i < numCourses; i++)
        {
            for (auto neighbour : adj[i])
            {
                indegree[neighbour]++;
            }
        }
        // finding indegree which have 0;
        queue<int> que;
        for (int j = 0; j < numCourses; j++)
        {
            if (indegree[j] == 0)
                que.push(j);
        }

        // making all the indegree to 0 b
        vector<int> completed;
        while (!que.empty())
        {
            int currCourse = que.front();
            que.pop();
            completed.push_back(currCourse);
            for (auto iterNeighbor : adj[currCourse])
            {
                indegree[iterNeighbor]--;
                if (indegree[iterNeighbor] == 0)
                {
                    que.push(iterNeighbor);
                }
            }
        }
        return (completed.size() == numCourses) ? true : false;
    }
};