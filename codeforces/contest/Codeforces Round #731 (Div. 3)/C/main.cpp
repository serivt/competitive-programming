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
        int k, n, m;
        cin >> k >> n >> m;
        int a[n], b[m];
        vector<int> r;
        sfor(i, n) cin >> a[i];
        sfor(i, m) cin >> b[i];
        int i = 0, j = 0;
        while (i < n || j < m) {
            while (i < n && a[i] <= k) {
                if (a[i] == 0) {
                    r.pb(0);
                    k++;
                } else if(a[i] <= k) {
                    r.pb(a[i]);
                }
                i++;
            }
            while (j < m && b[j] <= k) {
                if (b[j] == 0) {
                    r.pb(0);
                    k++;
                } else if(b[j] <= k) {
                    r.pb(b[j]);
                }
                j++;
            }
            if (a[i] > k && b[j] > k) break;
        }
        if (r.size() >= m + n) {
            sfor(i, m + n) {
                cout << r[i] << " ";
            }
        } else {
            cout << -1;
        }
        cout << endln;
    }
}
