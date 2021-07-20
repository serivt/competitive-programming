#include <bits/stdc++.h>

using namespace std;

/* Utilities */
#define fr(i, n) for (int i = 0; i < n; i++)
#define forin(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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
    int a = 0;
    fr(i, n) {
        char x;
        cin >> x;
        if (x == 'A') a++;
    }
    int b = n - a;
    if (a == b) cout << "Friendship";
    else if (a > b) cout << "Anton";
    else cout << "Danik";
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
}
