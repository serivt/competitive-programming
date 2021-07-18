#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

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
    int n;
    cin >> n;
    int a[n];
    fr(i, n) cin >> a[i];
    sort(a, a + n);
    int mre = a[0]; // most repeated element
    int cnt = 1, maxCnt = 1;
    forin(i, 1, n, 1) {
        if (a[i] != a[i - 1]) {
            if (cnt >= maxCnt) {
                mre = i - 1;
                maxCnt = cnt;
            }
            cnt = 0;
        }
        cnt++;
    }
    if (cnt >= maxCnt) {
        mre = n - 1;
        maxCnt = cnt;
    }
    int ans = 0;
    cout << (n - maxCnt) << endln;
    fr(i, n) {
        if (a[i] == a[mre]) continue;
        cout << (a[i] < a[mre] ? "1 " : "2 ") << (i + 1) << " " << (mre + 1) << endln;
    }
}
