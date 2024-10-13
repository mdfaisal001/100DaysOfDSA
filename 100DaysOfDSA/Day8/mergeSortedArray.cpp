class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int index = (m + n) - 1;
        while (m > 0 && n > 0)
        {
            if (nums1[m - 1] > nums2[n - 1])
            {
                nums1[index] = nums1[m - 1];
                m--;
                index--;
            }
            else
            {
                nums1[index] = nums2[n - 1];
                n--;
                index--;
            }
        }
        while (n > 0)
        {
            nums1[index] = nums2[n - 1];
            n--;
            index--;
        }
    }
};