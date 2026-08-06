#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        map<int,int> m;
        int sum=0;
        for(auto i : v){
            m[i]++;
            sum+=i;
        }
        sort(v.begin(),v.end());
        int mx=0,val=0;
        for(auto i : m){
            if(i.second>mx){
                mx=i.second;
                val=i.first;
            }
        }
        int r=n-mx;
        if(mx<=r+1){
            cout<<sum<<endl;
        }
        else{
            int ans=sum-mx*val;
            ans+=(r+2)*val;
            cout<<ans<<endl;
        }
    }
}
