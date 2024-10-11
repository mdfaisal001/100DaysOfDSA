class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_set<int> set1(begin(nums1), end(nums1));
        unordered_set<int> set2;
        for (int &nums : nums2)
        {
            if (set1.find(nums) != set1.end())
            {
                set2.insert(nums);
            }
        }
        vector<int> newVector;
        for (auto &it : set2)
        {
            newVector.push_back(it);
        }

        return newVector; // O(n)
    }
}; // more optimized

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> result;
        int i = 0, j = 0;
        unordered_set<int> set;
        vector<int>result;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {  set.insert(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
       for(int val:set){
           result.push_back(val);
    }
}; // optimized one O(nlogn)

// brute force approach
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> toStore;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                if (nums1[i] == nums2[j])
                {
                    toStore.insert(nums1[i]);
                }
            }
        }

        vector<int> newArray(toStore.begin(), toStore.end());
        return newArray;
    }
};
