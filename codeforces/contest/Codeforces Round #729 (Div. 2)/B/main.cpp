#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <set>

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

bool test(ll n, ll a, ll b, ll base, ll max) {
    if (base > 1) {
        if (n % base == 0) return true;
        if (base > max) return false;
    }
    if (a > 1 && base * a <= n) {
        if (base + b <= n) {
            return test(n, a, b, base * a, max) || test(n, a, b, base + b, max); 
        } else  {
            return test(n, a, b, base * a, max);
        }
    } else if (base + b <= n) {
        return test(n, a, b, base + b, max);
    }
    return false;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, n;
        cin >> n >> a >> b;
        // ll max = sqrt(n) + 2;
        // bool contains = test(n, a, b, 1, n);
        // cout << (contains ? "Yes" : "No") << endln;
        vector<ll> x;
        set<ll> y;
        bool contains = false;
        x.push_back(1);
        int i = 0, j = 0;
        while (!contains && j < n && i < x.size()) {
            j = x[i];
            cout << j << endln;
            if (j > 1 && (n % j == 0 || n % j == 1)) {
                contains = true;
                break;
            }
            x.push_back(j * a);
            x.push_back(j + b);
            i++;
        }
        cout << (contains ? "Yes" : "No") << endln;
    }
}
