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
    int k, n, m, i = 0, j = 0;
    cin >> k >> n >> m;
    int a[n], b[m], c[n + m];
    fr(i, n) cin >> a[i];
    fr(i, m) cin >> b[i];
    fr(z, n + m) {
        if (i < n && a[i] && a[i] <= k) c[z] = a[i++];
        else if (j < m && b[j] && b[j] <= k) c[z] = b[j++];
        else if (i < n && a[i] == 0) c[z] = 0, k++, i++;
        else if (j < m && b[j] == 0) c[z] = 0, k++, j++;
    }
    if (i == n && j == m) fr(i, n + m) cout << c[i] << " ";
    else cout << -1;
    cout << endln;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
