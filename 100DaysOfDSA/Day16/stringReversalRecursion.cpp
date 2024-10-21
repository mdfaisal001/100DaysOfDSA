class Solution
{
private:
    void reverseHelper(vector<char> &s, int firstIndex, int lastIndex)
    {
        if (firstIndex >= lastIndex)
            return;

        int temp = s[firstIndex];
        s[firstIndex] = s[lastIndex];
        s[lastIndex] = temp;
        firstIndex++;
        lastIndex--;
        reverseHelper(s, firstIndex, lastIndex);

        // we can also use swap function;
    }

public:
    void reverseString(vector<char> &s)
    {
        int n = s.size();
        reverseHelper(s, 0, n - 1);
    }
};