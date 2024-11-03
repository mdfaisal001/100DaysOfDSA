class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> palindromeVector;
        if (x < 0)
        {
            return false;
        }
        while (x > 0)
        {
            int ldigit = x % 10;
            palindromeVector.push_back(ldigit);
            x /= 10;
        }
        int leftptr = 0;
        int rightptr = palindromeVector.size() - 1;
        while (leftptr < rightptr)
        {
            if (palindromeVector[leftptr] != palindromeVector[rightptr])
            {
                return false;
            }
            leftptr++;
            rightptr--;
        }
        return true;
    }
};

class Solution
{
private:
    int reverse(int x)
    {
        int res = 0;
        while (x > 0)
        {
            int temp = x % 10;
            res = (res * 10) + temp;
            x = x / 10;
        }
        return res;
    }

public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int rev = reverse(x);
        int originalValue = x;

        while (originalValue > 0)
        {
            int temp1 = originalValue % 10;
            int temp2 = rev % 10;
            if (temp1 != temp2)
                return false;
            originalValue /= 10;
            rev /= 10;
        }
        return true;
    }
}; // works in java in cpp overflow happpen
