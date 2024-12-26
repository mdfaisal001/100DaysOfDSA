class Solution
{
private:
    Node *cloneNode(Node *&node, unordered_map<Node *, Node *> &map)
    {
        Node *newNode = new Node(node->val);
        map[node] = newNode;
        for (auto neighbour : node->neighbors)
        {
            if (map.find(neighbour) == map.end())
            { // if !neighbour in map recursive the function
                newNode->neighbors.push_back(cloneNode(neighbour, map));
            }
            else
            {
                newNode->neighbors.push_back(map[neighbour]); // if neighbour in map just pushback the neighbour;
            }
        }
        return newNode;
    }

public:
    Node *cloneGraph(Node *node)
    {
        if (!node)
            return nullptr;
        unordered_map<Node *, Node *> map;
        return cloneNode(node, map);
    }
};