#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    int l = n * n;
    bool isMagic = true;
    // d1, d2, h, v
    int v[4] = {0, 0, 0, 0};
    int m[l];
    for (int i = 0; i < l; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < l; i += n + 1) v[0] += m[i];
    for (int i = n - 1; i < l - 1; i += n - 1) {
        v[1] += m[i];
    }
    if (v[0] == v[1]) {
        for (int i = 0; i < n; i++) {
            v[2] = 0, v[3] = 0;
            // rows
            for (int j = n * i; j < n * i + n; j++) v[2] += m[j];
            // cols
            for (int j = i; j < l; j += n) v[3] += m[j];
            if (v[0] != v[2] || v[0] != v[3]) {
                isMagic = false;
                break;
            }
        }
    } else {
        isMagic = false;
    }
    cout << (isMagic ? "Yes" : "No") << endl;
    return 0;
}
