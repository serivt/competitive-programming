#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(long x) {
    if (x < 0) return isPrime(-x);
    if (x < 5 || x % 2 == 0 || x % 3 == 0) return x == 2 || x == 3;
    long max = sqrt(x) + 2;
    long i = 5;
    while (i < max) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long d;
        cin >> d;
        long a = d + 1;
        while(!isPrime(a)) a++;
        long b = a + d;
        while(!isPrime(b)) b++;
        cout << (a * b) << endl;
    }
}
