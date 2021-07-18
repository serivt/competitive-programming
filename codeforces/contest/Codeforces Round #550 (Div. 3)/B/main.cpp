#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* Utilities */
#define fr(i, n) for (int i = 0; i < n; i++)
#define forin(i, j, k, in) for (int i = j; i < k; i += in)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define pa(i, arr, n) \
    fr(i, n) { cout << arr[i] << " "; }
#define pael(i, arr, n) \
    fr(i, n) { cout << arr[i] << endln; }
#define in(a, b, c) a <= b && b <= c
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
    int n;
    cin >> n;
    int a[n];
    vector<int> even, odd, v;
    fr(i, n) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even.pb(a[i]);
        } else {
            odd.pb(a[i]);
        }
    }
    sort(even.begin(), even.end(), greater<>());
    sort(odd.begin(), odd.end(), greater<>());
    if (even.size() <= odd.size()) {
        v.pb(odd[0]);
        fr(i, even.size()) {
            v.pb(even[i]);
            v.pb(odd[i + 1]);
        }
        forin(i, even.size() + 1, odd.size(), 1) v.pb(odd[i]);
    } else {
        v.pb(even[0]);
        fr(i, odd.size()) {
            v.pb(odd[i]);
            v.pb(even[i + 1]);
        }
        forin(i, odd.size() + 1, even.size(), 1) v.pb(even[i]);
    }
    int j = 1;
    for(; j<n; j++) if (v[j] % 2 == v[j - 1] % 2) break;
    int ans = 0;
    forin(i, j, n, 1) ans += v[i];
    cout << ans << endln;
}
