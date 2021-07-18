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

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool yes = true;
        char c = 'a';
        char l = s.length() + 96;
        string s2 = "";
        int lastIndex = -1;
        while (c <= l) {
            auto index = s.find(c);
            if (index == string::npos) {
                yes = false;
                break;
            }
            if (index > lastIndex) {
                s2 = s2 + c;
            } else {
                s2 = c + s2;
            }
            lastIndex = index;
            c++;
        }
        if (yes) {
            sfor(i, s.length()) {
                if (s[i] != s2[i]) {
                    yes = false;
                    break;
                }
            }
        }
        cout << (yes ? "YES" : "NO") << endln;
    }
}
