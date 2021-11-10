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
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    while (i < s.length()) {
        j = 0;
        while (i < s.length() && s[i] != t[0]) i++;
        int k = i;
        while (k < s.length() && j < t.length() && s[k] == t[j]) k++, j++;
        k--, j--;
        while (k >= 0 && j < t.length() && s[k] == t[j]) k--, j++;
        if (j == t.length()) {
            cout << "YES" << endln;
            break;
        }
        i++;
    }
    if (j != t.length()) cout << "NO" << endln;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; 
    cin >> t;
    while (t--) solve();
}
