#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int t[n];
    for (int i=0; i<n; i++) cin >> t[i];
    int c[3] = {0,0,0};
    int previous = t[0];
    int ans = 0;
    c[previous]++;
    for (int i=1; i<n; i++) {
        if (previous != t[i]) {
            ans = max(ans, min(c[1], c[2]) * 2);
            c[t[i]] = 0;
        }
        c[t[i]]++;
        previous = t[i];
    }
    ans = max(ans, min(c[1], c[2]) * 2);
    cout << ans << endl;
    return 0;
}
