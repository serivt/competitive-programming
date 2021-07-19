#include <bits/stdc++.h>

using namespace std;

/* Utilities */
#define fr(i, n) for (int i = 0; i < n; i++)
#define forin(i, j, k, in) for (int i = j; i < k; i += in)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
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

void solve() {
    int n;
    cin >> n;
    int sevens = n / 7;
    while(sevens > 0 && ((n - (sevens * 7)) % 4) != 0) sevens--;
    int fours = (n - sevens * 7) / 4;
    if (n - sevens * 7 - fours * 4 == 0) {
        fr(i, fours) cout << "4";
        fr(i, sevens) cout << "7";
    } else {
        cout << "-1";
    }
    cout << endln;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
}
