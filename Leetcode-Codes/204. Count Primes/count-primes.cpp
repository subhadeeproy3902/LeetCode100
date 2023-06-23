class Solution {
public:
    int countPrimes(int n) {
        std::vector<bool> isPrime(n, true);
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;

                for (int j = 2 * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return count;
    }
};