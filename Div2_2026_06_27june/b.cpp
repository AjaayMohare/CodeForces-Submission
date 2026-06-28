#include<bits/stdc++.h>
using namespace std;

int main(){
    // your code goes here
    int t;
    cin>>t;
     while(t--){
         /// hello
        const int MOD=998244353;

        long long n,m,r,c;
        cin>>n>>m>>r>>c;

        long long ans1=n*(c-1)+m*(r-1)-(r-1)*(c-1);
        long long ans2=1,b=2;

        while(ans1){
            if(ans1&1) ans2=ans2*b%MOD;
            b=b*b%MOD;
            ans1>>=1;
        }

        cout<<ans2<<endl;
    }
}
