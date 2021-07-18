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
        int n;
        cin >> n;
        int a[n], acc[n + 1];
        clr(acc);
        int previous = 0;
        sfor(i, n) {
            cin >> a[i];
            acc[i + 1] += a[i] + previous;
            previous = acc[i + 1];
        }
        int ans = 0;
        sfor(i, n) {
            if (a[i] < acc[0] || a[i] > acc[n - 1]) continue;
            int l = 0;
            int r = lower_bound(acc, acc + n, a[i]) - acc;
            while (r < n + 1) {
                int diff = acc[r] - acc[l];
                if (diff == a[i] && r - l > 1) {
                    ans++;
                    break;
                } else if (diff > a[i]) {
                    l++;
                } else {
                    r++;
                }
                if (l == r) r++;
            }
        }
        cout << ans << endl;
    }
}
