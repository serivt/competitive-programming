#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0, count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] <= x) {
            count++;
        } else {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    cout << ans << endl;
    return 0;
}
