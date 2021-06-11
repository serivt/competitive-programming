#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    int n = 0;
    char c = 'a';
    for(int i=0; i<s.length(); i++) {
        if (int(s[i]) > int(c)) {
            c = s[i];
            n = 0;
        }
        if (int(s[i]) == int(c)) n++;
    }
    char arr[n];
    fill(arr, arr + n, c);
    for (const auto& i : arr) {
        cout << i;
    }
    cout << endl;
    return 0;
}
