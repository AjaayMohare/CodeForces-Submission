#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 
        vector<long long> v(n+1);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
 
        vector<long long> ans(n+1,0);
 
        for(int i=2;i<=n-1;i++){
            ans[i] = -2LL*v[i] + 1LL*v[i-1] + 1LL*v[i+1];
            ans[i] /= 2;
        }
 
        long long val=0;
        long long v1=0;
 
        for(int i=2;i<=n-1;i++){
            val += 1LL*(i-1)*ans[i];
            v1 += 1LL*(n-i)*ans[i];
        }
 
        ans[n] = (v[1] - val) / (n-1);
 
        ans[1] = (v[n] - v1) / (n-1);
 
        for(int i=1;i<=n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
