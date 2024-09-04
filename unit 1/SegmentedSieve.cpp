// segmented sieve
// Time Complexity: O(nloglogn)
// Space Complexity: O(sqrt(n))
#include <bits/stdc++.h>
using namespace std;
// Function to generate primes using segmented sieve
vector<int> segmentedSieve(int n) {
    int limit = floor(sqrt(n)) + 1;
    vector<bool> isPrime(limit, true);
    vector<int> primes;

    // Generate all primes up to sqrt(n)
    for (int i = 2; i < limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Generate primes in segments
    int low = limit;
    int high = 2 * limit;
    while (low < n) {
        if (high > n) {
            high = n;
        }

        vector<bool> segment(high - low + 1, true);

        for (int prime : primes) {
            int start = (low / prime) * prime;
            if (start < low) {
                start += prime;
            }

            for (int j = start; j <= high; j += prime) {
                segment[j - low] = false;
            }
        }

        for (int i = low; i <= high; i++) {
            if (segment[i - low]) {
                primes.push_back(i);
            }
        }

        low += limit;
        high += limit;
    }

    return primes;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> primes = segmentedSieve(n);

    cout << "Primes up to " << n << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}