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
    int n;
    cin >> n;
    while (n--) {
        string c;
        cin >> c;
        int i = 0;
        bool excelFormat = true;
        while (c[i++] > '9');
        while (i < c.length() && c[i++] < 'A');
        if (i != c.length()) excelFormat = false;
        i = 0;
        if (excelFormat) {
            string scol = "";
            while (c[i] > '9') scol += c[i++];
            int row = stoi(c.substr(i, c.length()));
            long col = 0;
            sfor(j, scol.length()) {
                col = 1 + col * 26 + (scol[j] - 'A');
            }
            cout << 'R' << row<< 'C' << col << endln;
        } else {
            string row = "";
            while (c[++i] != 'C') row += c[i];
            int col = stoi(c.substr(i + 1, c.length()));
            string scol = "";
            while (col > 0) {
                int mod = (col - 1) % 26;
                scol = char('A' + mod) + scol;
                col = (col - 1) / 26;
            } 
            cout << scol << row << endln;
        }
    }
}