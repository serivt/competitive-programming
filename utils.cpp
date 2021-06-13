#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* Utilities */
#define sfor(i, n) for (int i = 0; i < n; i++)
#define forin(i, j, k, in) for (int i = j; i < k; i += in)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define pa(i, arr, n) \
    sfor(i, n) { cout << arr[i] << " "; }
#define pael(i, arr, n) \
    sfor(i, n) { cout << arr[i] << endln; }
#define in(a, b, c) b <= a &&a <= c
#define clr(x) memset(x, 0, sizeof(x))
#define endln "\n"
#define pb push_back

/* Constants */
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

// Quick primality check
bool isPrime(long n) {
    if (n < 0) return isPrime(-n);
    if (n < 5 || n % 2 == 0 || n % 3 == 0) return n == 2 || n == 3;
    long max = sqrt(n) + 2;
    long i = 5;
    while (i < max) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

// Summation from 1 to n
// https://en.wikipedia.org/wiki/Summation
long long summation(long n) {
    return (n * (n + 1)) / 2;
}

// Get n from summation result
long getNFromSummation(long long summation) {
    return sqrt(2 * summation + 0.25) - 0.5;
}

// Sieve of Eratosthenes
// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
bool * createSieve(int limit) {
    bool sieve[limit + 1];
    sieve[0] = sieve[1] = true;
    int max = (int) sqrt(limit);
    forin(i, 2, max, 1) {
        if (sieve[i]) continue;
        forin(j, i * 2, limit, i) sieve[j] = true;
    }
    return sieve;
}

// Greatest common divisor
// https://en.wikipedia.org/wiki/Greatest_common_divisor
long gcd(long a, long b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

// Least common multiple
// https://en.wikipedia.org/wiki/Least_common_multiple
long lcm(long a, long b) {
    return a / gcd(a, b) * b;
}

// Binary search
// https://en.wikipedia.org/wiki/Binary_search_algorithm
int binarySearch(int * array, int fromIndex, int toIndex, int key) {
    int low = fromIndex;
    int high = toIndex - 1;
    while (low <= high) {
        int mid = (low + high) >> 1;
        int midVal = array[mid];
        if (midVal < key) {
            low = mid + 1;
        } else if (midVal > key) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -(low + 1);
}

// Longest common subsequence
// https://en.wikipedia.org/wiki/Longest_common_subsequence_problem
int lcs(string s, string t) {
    int dp[1001][1001];
    int m = s.length(), n = t.length();
    if (m == 0 || n == 0) return 0;
    for (int i = 0; i <= m; ++i) dp[i][0] = 0;
    for (int j = 1; j <= n; ++j) dp[0][j] = 0;
    sfor(i, m) {
        sfor(j, m) {
            if (s[i] == t[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            } else {
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    return dp[m][n];
}
