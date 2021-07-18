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
#include <numeric>
 
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
 
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto& x : a) cin >> x;
        for (auto& x : b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll aSum = 0, bSum = 0;
        for (int i = n / 4; i < n; i++) aSum += a[i], bSum += b[i];
        int ans = 0;
        int j = n / 4 - 1;
        while (aSum < bSum) {
            ans++, n++;
            aSum += 100;
            if (n % 4 == 0) {
                aSum -= a[n / 4 - 1];
            } else if (j>=0) bSum += b[j--];
        }
        cout << ans << endln;
    }
}