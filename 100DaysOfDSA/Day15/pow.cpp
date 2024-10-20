class Solution
{
public:
    double myPow(double x, int n)
    {
        double base = x;
        double exponent = n;
        double result = pow(base, exponent);
        return result;
    }
};

class Solution
{
public:
    double myPow(double x, int n)
    {
        long long exp = n;
        if (exp < 0)
        {
            if (exp == INT_MIN)
            {
                if (x == 0)
                    return 0;
                x = 1 / x;
                exp = -(exp + 1);
                return x * myPow(x, exp);
            }
            else
            {
                x = 1 / x;
                exp = -(exp);
            }
        }
        double base = x;
        double result = 1.0;
        while (exp > 0)
        {
            if (exp % 2 == 1)
            {
                result *= base;
            }
            base *= base;
            exp = exp / 2;
        }

        return result;
    }
};