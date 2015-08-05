class Solution {
public:
    int countPrimes(int n) {
        bool primes[n];
        for (int i = 2; i < n; ++i)
        {
            if (i % 2)
            {
                primes[i] = true;
            }
            else{
                primes[i] = false;
            }
        }
        for (int i = 3; i*i <= n; ++i)
        {
            if (primes[i])
            {
                for (int j = i*i; j < n; j += i)
                {
                    primes[j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; ++i)
        {
            if (primes[i])
            {
                count++;
            }
        }
        return count;
    }
    bool isPrime(int n){
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i*i < n; ++i)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};