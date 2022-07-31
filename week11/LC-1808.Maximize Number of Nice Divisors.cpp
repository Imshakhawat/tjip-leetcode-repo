
// TC: O(n)/// n refers to the number divisors
// MC: O(n)

class Solution
{
public:
    static const int MOD = 1000000007;
    long long modPower(int n, int m)
    {

        if (m == 0)
            return 1;
        if (m % 2 == 0)
        {
            long long t = modPower(n, m / 2);
            return (t * t) % MOD;
        }
        return (n * modPower(n, m - 1)) % MOD;
    }

    int maxNiceDivisors(int primeFactors)
    {
        if (primeFactors == 1)
            return 1;
        if (primeFactors % 3 == 0)
        {
            return modPower(3, primeFactors / 3);
        }
        if (primeFactors % 3 == 1)
        {
            return (4 * modPower(3, (primeFactors - 2) / 3)) % MOD;
        }

        return (2 * modPower(3, primeFactors / 3)) % MOD;
    }
};