#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long a[n];
    long r[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = n / 2, j = 0; i < n; i++, j+= 2) r[j] = a[i];
    for (int i = 0, j = 1; i < n / 2; i++, j+= 2) r[j] = a[i];
    cout << (n % 2 == 0 ? (n / 2 - 1) : n / 2) << endl;
    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << endl;
    return 0;
}
