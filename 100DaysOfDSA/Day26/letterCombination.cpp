class Solution
{
private:
    void getCombination(string &digits, int id, string &combination, vector<string> &result)
    {
        map<char, string> map = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        if (id >= digits.size())
        {
            result.push_back(combination);
            return;
        }
        string tempValue = map[digits[id]];
        for (char ch : tempValue)
        {
            combination.push_back(ch);
            getCombination(digits, id + 1, combination, result);
            combination.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};
        vector<string> result;
        string combination;
        getCombination(digits, 0, combination, result);
        return result;
    }
};