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
#define ull unsigned long long

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
        int a[n];
        sfor(i, n) {
            cin >> a[i];
        }
        int ans = 0;
        for (ll i=1; i<n+1; i++) {
            for (ll j=a[i-1]-i; j<n+1; j+=a[i-1]) {
                if (j <= 0) continue;
                if (i + j == a[i-1] * a[j-1] && i < j) ans++;
            }
        }
        cout << ans << endl;
    }
}
