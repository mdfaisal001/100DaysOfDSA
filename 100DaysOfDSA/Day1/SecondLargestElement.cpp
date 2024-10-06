
#include <vector>
#include <algorithm>

class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        int n;
        n = arr.size();
        if (n < 2)
            return -1;
        int max = INT_MIN, secondMax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                secondMax = max;
                max = arr[i];
            }
            else if (arr[i] > secondMax && arr[i] != max)
            {
                secondMax = arr[i];
            }
        }
        return (secondMax == INT_MIN ? -1 : secondMax);
    }
};