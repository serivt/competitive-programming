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

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

bool isEqual(string s, string t, int limit) {
    sfor(i, limit) {
        if (s[i] != t[i]) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        int limit = lcm(s.length(), t.length());
        if (s.length() != t.length()) {
            int sl = s.length();
            int tl = t.length();
            sfor(i, tl * sl - sl) {
                s += s[i % sl];
            }
            sfor(i, tl * sl - tl) {
                t += t[i % tl];
            }
        }
        if (!isEqual(s, t, limit)) {
            cout << -1 << endln;
        } else {
            sfor(i, limit) cout << s[i];
            cout << endln;
        }
    }
}
