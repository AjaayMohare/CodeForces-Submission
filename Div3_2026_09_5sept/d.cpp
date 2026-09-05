#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int mx=INT_MIN;
        for(auto i : a) mx=max(mx,i);
        vector<int> fr(1,0);
        for(auto i :a){
            if(i==0) fr[0]++;
        }
        // if equal sabko badhao
        if(fr[0]==1){
            cout << "no" << endl;
            continue;
        }
        if(fr[0]==0){
            cout << "yes" << endl;
            for(int i=0;i<n;i++){
                if(i%3==0) cout << "A" ;
                if(i%3==1) cout << "B" ;
                if(i%3==2) cout << "c" ;
            }  
            cout << endl;
            continue;
        }
        string ans(n,'a');
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]==0 && flag==0){
                ans[i]='b';
                flag=1;
                
            }
            else if(a[i]==0 && flag==1){
                continue;
            }
            else ans[i]='c';
        }
        cout << "yes" << endl;
        cout << ans << endl;
    }
    return 0;
}
