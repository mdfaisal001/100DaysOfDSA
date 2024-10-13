class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_set<int> set;

        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            if (set.find(complement) != set.end())
            {
                for (int j = 0; j < i; j++)
                {
                    if (nums[j] == complement)
                    {
                        return {j, i};
                    }
                }
            }
            set.insert(nums[i]);
        }

        vector<int> result(set.begin(), set.end());
        return result;
    }

}; // with hash set O(n)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> newMap;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (newMap.find(complement) != newMap.end())
            {
                return {newMap[complement], i};
            }
            newMap[nums[i]] = i;
        }
        for (const auto &value : newMap)
        {
            result.push_back(value.second);
        }
        return result;
    }
}; // with hash map O(n)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
}; // O(n^2)