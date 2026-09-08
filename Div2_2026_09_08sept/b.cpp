#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        if(x==y) cout<<0<<endl;
        else{
            long long d=y-x;
            long long n=min(k,max(0LL,d-x+1));
            long long ans=0;
            for(long long i=0;i<n;i++) ans+=(y+i)%(x+i);
            if(k>n) ans+=(k-n)*d;
            cout<<ans<<endl;
        }
    }
}
