#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int t[n];
    for (int i=0; i<n; i++) {
        cin >> t[i];
    }
    int previous = t[0];
    int ell = 0;
    int tuna = 0;
    if (previous == 1) tuna++;
    if (previous == 2) ell++;
    int flag = 0;
    int ans = 0;
    // 1 -> tuna; 2 -> ell
    for (int i=1; i<n; i++) {
        if (previous != t[i]) {
            ans = max(ans, min(ell, tuna) * 2);
            if (t[i] == 1) tuna = 0; 
            if (t[i] == 2) ell = 0;
        }
        if (t[i] == 1) tuna++;
        if (t[i] == 2) ell++;
        previous = t[i];
    }
    ans = max(ans, min(ell, tuna) * 2);
    cout << ans << endl;
    return 0;
}
