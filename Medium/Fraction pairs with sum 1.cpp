// Fraction pairs with sum 1

// Given a list of N fractions, represented as two lists numerator and denominator, the task is to determine the count of pairs of fractions whose sum equals 1.

// Below is a cpp solution

// solved using map

class Solution
{
    public:
    int countFractions(int n, int num[], int den[])
    {
        unordered_map<long double, int>m;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            long double ab = num[i]*1.0/den[i];
            long double bc = (den[i] - num[i])*1.0/den[i];
            if(m.find(bc) != m.end())
                ans += m[bc];
            m[ab]++;
        }
        return ans;
    }
};
