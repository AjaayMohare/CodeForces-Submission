#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int g=__gcd(x,y);
        bool ok=true;
        for(int i=0;i<n;i++){
            if(i%g != (p[i]-1)%g){
                ok=false;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
