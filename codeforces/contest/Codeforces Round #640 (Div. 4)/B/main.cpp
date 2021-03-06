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
        ll n;
        int k;
        cin >> n >> k;
        ll r = n - (2 * (k - 1));
        bool no = true;
        if (r % 2 == 0 && r > 0) {
            cout << "YES" << endln << r << " ";
            sfor(i, k - 1) cout << "2 ";
            cout << endln;
            no = false;
        } else {
            r = n - k + 1;
            if (r % 2 != 0 && r > 0) {
                cout << "YES" << endln << r << " ";
                sfor(i, k - 1) cout << "1 ";
                cout << endln;
                no = false;
            }
        }
        if (no) cout << "NO" << endln;
    }
}
