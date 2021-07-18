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
        sfor(i, min(n, m)) {
            if (a[i] == 0 && b[i] == 0) {
                r.pb(0);
                r.pb(0);
                k += 2;
            } else {
                if (a[i] == 0) {
                    r.pb(0);
                    k++;
                    if (b[i] <= k) {
                        r.pb(b[i]);
                    } else {
                        exists = false;
                        break;
                    }
                } else if (b[i] == 0) {
                    r.pb(0);
                    k++;
                    if (a[i] <= k) {
                        r.pb(a[i]);
                    } else {
                        exists = false;
                        break;
                    }
                } else if (a[i] <= k && b[i] <= k) {
                    r.pb(a[i]);
                    r.pb(b[i]);
                } else {
                    exists = false;
                    break;
                }
            }
        }
        if (n != m) {
            if (n < m) {
                forin(i, n, m, 1) {
                    if (b[i] == 0) {
                        k++;
                        r.pb(0);
                    } else if (b[i] <= k) {
                        r.pb(b[i]);
                    } else {
                        exists = false;
                        break;
                    }
                }
            } else {
                forin(i, m, n, 1) {
                    if (a[i] == 0) {
                        k++;
                        r.pb(0);
                    } else if (a[i] <= k) {
                        r.pb(a[i]);
                    } else {
                        exists = false;
                        break;
                    }
                }
            }
        }
        if (true) {
            sfor(i, r.size()) {
                cout << r[i] << " ";
            }
        } else {
            cout << -1;
        }
        cout << endln;
    }
}
