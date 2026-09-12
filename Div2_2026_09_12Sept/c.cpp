#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int>diff(n+1,0);
        for(int k=1;k<=n;k++){
            int x=a[k]*k;
            if(x<n){
                int l=x;
                int r=min(n-1,(a[k]+1)*k-1);
                diff[l]++;
                diff[r+1]--;
            }
        }
        vector<int>ans;
        int cur=0;
        for(int i=0;i<n;i++){
            cur+=diff[i];
            if(cur==0) ans.push_back(i);
        }
        cout<<ans.size()<<endl;
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }
}
