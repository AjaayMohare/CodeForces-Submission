#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long mod=1000000000+7;
        vector<long long>p(n+1,1);
        for(int i=1;i<=n;i++){
            p[i]=(p[i-1]*2)%mod;
        }
        int neg=0,i=0;
        while(i<n&&a[i]==-1){
            neg++;
            i++;
        }
        vector<pair<long long,int>>v;
        while(i<n){
            int j=i;
            while(j<n&&a[j]==a[i]){
                j++;
            }
            v.push_back({a[i],j-i});
            i=j;
        }
        long long pos=1;
        for(auto i:v){
            pos=(pos*p[i.second-1])%mod;
        }
        long long cnt=0;
        for(int i=1;i<v.size();i++){
            if(v[i].first-v[i-1].first==1){
                cnt++;
            }
        }
        long long ans;
        if(neg==0){
            ans=pos;
        }
        else{
            long long x=p[neg-1];
            ans=(x*pos)%mod;
            ans=(ans+(((x*pos)%mod)*cnt)%mod)%mod;
        }
        cout<<ans<<endl;
    }
}
