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
        int a[n];
        sfor(i, n) cin >> a[i];
        long alice = 0, bob = 0, prev = a[0], talice = a[0], tbob = 0;
        int i = 1, j = n - 1, turn = 1, moves = 1;
        while (i <= j) {
            moves++;
            if (turn == 0) {
                while (prev >= 0) {
                    alice += a[i];
                    prev -= a[i];
                    talice += a[i];
                    i++;
                    if (i > j) break;
                }
                prev = alice;
                alice = 0;
                turn = 1;
            } else {
                while (prev >= 0) {
                    bob += a[j];
                    prev -= a[j];
                    tbob += a[j];
                    j--;
                    if (j < i) break;
                }
                prev = bob;
                bob = 0;
                turn = 0;
            }
        }
        cout << moves << " " << talice << " " << tbob << endln;
    }
}
