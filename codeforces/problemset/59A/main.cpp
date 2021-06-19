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
    string s;
    cin >> s;
    int upper = 0;
    sfor(i, s.length()) {
        if (s[i] >= 'A' && s[i] <= 'Z') upper++;
    }
    if (upper > s.length() / 2) {
        sfor(i, s.length()) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
        }
    } else {
        sfor(i, s.length()) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
        }
    }
    cout << s << endln;
}
