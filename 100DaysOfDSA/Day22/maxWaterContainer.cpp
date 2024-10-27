class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int low = 0;
        int high = n - 1;
        vector<int> temp;
        while (low <= high)
        {
            int width = high - low;
            int area = min(height[low], height[high]) * width;
            temp.push_back(area);
            if (height[low] > height[high])
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        int maxArea = temp[0];
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] > maxArea)
            {
                maxArea = temp[i];
            }
        }
        return maxArea;
    }
};

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int low = 0;
        int high = n - 1;
        int maxArea = 0;
        while (low <= high)
        {
            int width = high - low;
            int area = min(height[low], height[high]) * width;
            maxArea = max(maxArea, area);
            if (height[low] > height[high])
            {
                high--;
            }
            else
            {
                low++;
            }
        }

        return maxArea;
    }
};