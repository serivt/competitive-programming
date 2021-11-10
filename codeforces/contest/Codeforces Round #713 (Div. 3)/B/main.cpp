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
    char m[n][n];
    pair<int, int> p1(-1, -1);
    pair<int, int> p2(-1, -1);
    fr(i, n) {
        fr(j, n) {
            cin >> m[i][j];
            if (m[i][j] == '*' && p1.first == -1) p1 = make_pair(i, j);
            else if (m[i][j] == '*' && p2.first == -1) p2 = make_pair(i, j);
        }
    }
    if (p1.first == p2.first) {
        m[(p1.first + 1) % n][p1.second] = '*';
        m[(p1.first + 1) % n][p2.second] = '*';
    } else if (p1.second == p2.second) {
        m[p1.first][(p1.second + 1) % n] = '*';
        m[p2.first][(p2.second + 1) % n] = '*';
    } else {
        m[p1.first][p2.second] = '*';
        m[p2.first][p1.second] = '*';
    }
    fr(i, n) {
        fr(j, n) cout << m[i][j];
        cout << endln;
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
