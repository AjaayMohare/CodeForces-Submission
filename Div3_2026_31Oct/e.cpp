
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a,b;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll x;
            cin >> x;
            sum+=x;
            if(i%2==0) a.push_back(x);
            else b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<b.size();i++){
            if(a[i]+b[i]<0) sum-=2*(a[i]+b[i]);
        }
        cout << sum << endl;
    }
}
c
