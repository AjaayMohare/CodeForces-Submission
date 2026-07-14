#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        long long ans=0;
        long long cur=0;
        int j=0;
        for(int i=0;i<n;i++){
            cur+=a[i];
            if(j<m&&i==b[j]-1){
                ans+=abs(cur);
                cur=0;
                j++;
            }
        }
        ans+=cur;
        cout<<ans<<endl;
    }
}
