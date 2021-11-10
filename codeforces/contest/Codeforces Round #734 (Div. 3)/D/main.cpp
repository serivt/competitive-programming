#include <bits/stdc++.h>

using namespace std;

/* Utilities */
#define fr(i, n) for (int i = 0; i < n; i++)
#define forin(i, k, n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define in(a, b, c) a <= b && b <= c
#define clr(x) memset(x, 0, sizeof(x))
#define endln "\n"
#define println() cout << "\n"
#define pb push_back
#define ll long long
#define ul unsigned long
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define readArray(v) fr(i, sizeof(v)) cin >> v[i]

/* Constants */
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

void solve() {
    int n;
    cin >> n;
    map<char, int> v[n], g;
    string s[n];
    char m;
    int mc = 0, t = 0;
    fr(i, n) {
        cin >> s[i];
        fr(j, s[i].length()) {
            v[i][s[i][j]]++;
            v[i]['&']++;
            g[s[i][j]]++;
            if (g[s[i][j]] > mc) {
                mc = g[s[i][j]];
                m = s[i][j];
            }
            t++;
        }
    }
    int mr = g[m], ot = t - mr;
    vector<pair<int, int>> p;
    fr(i, n) {
        if (v[i][m] == 0 && mr <= ot) {
            ot -= v[i]['&'];
            n--;
        }
        p.pb(make_pair(v[i]['&'] - v[i][m], v[i][m]));
    }
    sort(all(p));
    while (n > 0 && mr <= ot) {
        ot -= p[n - 1].first;
        mr -= p[n - 1].second;
        n--;
    }
    cout << n << endln;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
