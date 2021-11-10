#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long ans = 0, a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n-1;i++) ans=max(ans,a[i]*a[i+1]);
        cout<<ans<<endl;
    }
}