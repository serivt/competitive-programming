#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    long long a[n];
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    long long b;
    for (int i = 0; i < m; i++) {
        cin >> b;
        auto f = lower_bound(a, a + n, b) - a;
        if (f == 0) {
            cout << (f + 1) << " " << b << endl;
        } else {
            cout << (f + 1) << " " << (b - a[f - 1]) << endl;
        }
    }
    return 0;
}
