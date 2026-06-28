#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,d;
        cin>>n>>d;

        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<long long>pre(3*n+1,0);
        for(int i=0;i<3*n;i++)pre[i+1]=pre[i]+a[i%n];

        long long ans=0;

        for(int i=0;i<n;i++){
            int p=i+n;
            int l=p-d;
            int r=p+d;

            long long sum=pre[r+1]-pre[l]-a[i];
            long long val=2*1LL*d*a[i]-sum;

            if(val>0)ans+=val;
        }

        cout<<ans<<endl;
    }
}
