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
    vector<int> ans;
    int x, p;
    cin >> x;
    p = x;
    ans.pb(x);
    for(int i=1; i<n; i++) {
        cin >> x;
        if (x <= p) ans.insert(ans.begin(), x),  p = x;
        else ans.pb(x);
    }
    for(int i: ans) cout << i << " ";
    println();
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
