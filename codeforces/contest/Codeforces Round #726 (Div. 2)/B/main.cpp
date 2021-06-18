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
#define ll long long
#define ul unsigned long

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
    while (t--) {
        long n, m, i, j;
        cin >> n >> m >> i >> j;
        long r1, c1, r2, c2;
        if (j > m / 2) {
            c1 = 1;
            c2 = m;
        } else {
            c1 = m;
            c2 = 1;
        }
        if (i > n / 2) {
            r1 = 1;
            r2 = n;
        } else {
            r1 = n;
            r2 = 1;
        }
        if (r1 == 1 && c1 == 1 && r1 == i && c1 == j) {
            if (r1 != r2 && r1 + 1 <= n) {
                r1++;
            } else if (c1 + 1 <= m) {
                c1++;
            } else {
                r1++;
            }
        }
        if (r2 == 1 && c2 == 1 && r2 == i && c2 == j) {
            if (r2 != r2 && r2 + 1 <= n) {
                r2++;
            } else if (c2 + 1 <= m) {
                c2++;
            } else {
                r2++;
            }
        }
        if (r1 == n && c1 == m && r1 == i && c1 == j) {
            if (r1 != r1 && r1 - 1 >= 1) {
                r1--;
            } else if (c1 - 1 >= 1) {
                c1--;
            } else {
                r1--;
            }
        }
        if (r2 == n && c2 == m && r2 == i && c2 == j) {
            if (r2 != r2 && r2 - 1 >= 1) {
                r2--;
            } else if (c2 - 1 >= 1) {
                c2--;
            } else {
                r2--;
            }
        }
        if (r1 < 1 || r1 > n) r1 = 1;
        if (r2 < 1 || r2 > n) r2 = 1;
        if (c1 < 1 || c1 > m) c1 = 1;
        if (c2 < 1 || c2 > m) c2 = 1;
        cout << r1 << " " << c1 << " " << r2 << " " << c2 << endln;
    }
}
