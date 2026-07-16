#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x=0;
        for(int i=1;i<=n;i++){
            x^=i;
        }
        int cur=x^k;
        vector<int>v;
        vector<int>vis(n,0);
        for(int i=n-1;i>=1;i--){
            if((cur^i)<cur){
                cur^=i;
                v.push_back(i);
                vis[i]=1;
            }
        }
        if(cur!=0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int xr = 0;
        vector<int> ans;
        for(auto i:v){
            cout<<i<<" ";
            xr^=i;
        }
        cout<<0<<" ";
        for(int i=1;i<n;i++){
            if(!vis[i]){
                cout<<i<<" ";
                xr^=i;
            }
        }
        cout<<endl;
        // cout << xr << " " << k << endl;
    }
    
}
