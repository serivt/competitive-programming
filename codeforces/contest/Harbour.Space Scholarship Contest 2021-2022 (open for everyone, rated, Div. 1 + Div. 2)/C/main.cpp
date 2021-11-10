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

int check(string& s, int v) {
    int a[10], b[10];
    clr(a), clr(b);
    for(int i=0, ac=0; i<s.length(); i+=2) {
        ac += (s[i] == '?') ? v : s[i] - '0';
        a[i] = ac, a[i + 1] = ac;
    }
    for(int i=1, j=0, ac=0; i<s.length(); i+=2, j+=2) {
        ac += (s[i] == '?') ? !v : s[i] - '0';
        b[j] = ac, b[j + 1] = ac;
    }
    // fr(i, 10) cout << a[i];
    // cout << endln;
    // fr(i, 10) cout << b[i];
    // cout << endln;
    int i = 6, j = 3, m = 0;
    for(;i<=10; i++, j -= i % 2 == 0) if (a[i - 1] > b[i - 1] + j) break;
    m = i - 1, i = 6, j = 2;
    for(;i<=10; i++, j -= i % 2 != 0) if (b[i - 1] > a[i - 1] + j) break;
    return min(m, i);
}

void solve() {
    string s;
    cin >> s;
    cout << min(check(s, 1), check(s, 0)) << endln;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; 
    cin >> t;
    while (t--) solve();
}
