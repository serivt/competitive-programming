#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    long double n, k;
    for(int i=0; i<t; i++) {
        cin >> n >> k;
        k = ceil(n / k) * k;
        cout << int(ceil(k / n)) << endl;
    }
    return 0;
}
