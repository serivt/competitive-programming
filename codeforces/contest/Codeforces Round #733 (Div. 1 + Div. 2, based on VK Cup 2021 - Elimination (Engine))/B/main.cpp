#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

/* Utilities */
#define fr(i, n) for (int i = 0; i < n; i++)
#define forin(i, j, k, in) for (int i = j; i < k; i += in)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define pa(i, arr, n) \
    fr(i, n) { cout << arr[i] << " "; }
#define pael(i, arr, n) \
    fr(i, n) { cout << arr[i] << endln; }
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

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int h, w;
        cin >> h >> w;
        int m[h * w];
        clr(m);
        forin(i, 0, w, 2) m[i] = 1;
        forin(i, w * 3 - 1, h * w, w * 2) m[i] = 1;
        for (int i = h * w - 3; i > h * w - w - 1; i -= 2)
            m[i] = 1;
        for (int i = h * w - w * 3; i > w; i -= w * 2)
            m[i] = 1;
        forin(i, 1, h * w + 1, 1)
        {
            cout << m[i - 1];
            if (i % w == 0)
                cout << endln;
        }
        cout << endln;
    }
}
