class Solution
{
public:
    bool isValidSerialization(string preorder)
    {
        stringstream ss(preorder);
        string node;
        int space = 1;
        while (getline(ss, node, ','))
        {
            space--; // each element takes 1 space for itself;
            if (space < 0)
                return false; // if the space whenever goes <0 return false;
            if (node != "#")
            {
                space += 2; // add two space for the non null node;
            }
        }
        return (space == 0); // if the tree is preorder the space will 0 so true;
    }
};