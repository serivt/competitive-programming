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

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    sfor(i, t) {
        int n;
        cin >> n;
        char s[n];
        int counter[26];
        clr(counter);
        sfor(j, n) cin >> s[j];
        char previous = s[0];
        bool suspicious = false;
        forin(j, 1, n, 1) {
            if (s[j] != previous) {
                int index = previous - 'A';
                if (counter[index] > 0) {
                    suspicious = true;
                    break;
                }
                counter[index]++;
                previous = s[j];
            }
        }
        if (counter[s[n - 1] - 'A'] > 0) {
            suspicious = true;
        }
        cout << (suspicious ? "NO" : "YES") << endln;
    }
}
