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
        bool exists = true;
        int i = 0, j = 0;
        while (i + j < n + m) {
            int impossible = 0;
            if (a[i] == 0 && b[j] == 0) {
                r.pb(0);
                r.pb(0);
                k += 2;
                i++;
                j++;
                continue;
            }
            if (j < m) {
                if (b[j] == 0) {
                    r.pb(0);
                    k++;
                    j++;
                } else if (b[j] <= k) {
                    r.pb(b[j]);
                    j++;
                } else {
                    impossible++;
                }
            } else {
                impossible++;
            }
            if (i < n) {
                if (a[i] == 0) {
                    r.pb(0);
                    k++;
                    i++;
                } else if (a[i] <= k) {
                    r.pb(a[i]);
                    i++;
                } else {
                    impossible++;
                }
            } else {
                impossible++;
            }
            if (impossible >= 2) {
                exists = false;
                break;
            }
        }
        if (exists && r.size() == m + n) {
            sfor(i, r.size()) {
                cout << r[i] << " ";
            }
        } else {
            cout << -1;
        }
        cout << endln;
    }
}
