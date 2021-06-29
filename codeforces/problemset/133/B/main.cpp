#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>

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
    string b = "";
    map<char, string> ct = {
        {'>', "1000"},
        {'<', "1001"},
        {'+', "1010"},
        {'-', "1011"},
        {'.', "1100"},
        {',', "1101"},
        {'[', "1110"},
        {']', "1111"},
    };
    sfor(i, s.length()) {
        b += ct.find(s[i])->second;
    }
    ll p = 1;
    int n = 0;
    for(int i = b.length() - 1; i >= 0; i--) {
        if (b[i] == '1') {
            n += (p % 1000003);
        }
        p *= 2;
    }
    cout << b << endl;
    cout << (n % 1000003) << endl;
}
