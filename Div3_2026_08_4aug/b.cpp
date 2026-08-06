#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        vector<pair<char,int>> vc;
        int n;
        string s;
        cin >> n >> s;
        int in=0;
        int cnt=0;
        while(in<n){
            int ex=in;
            char ch = s[in];
            while( ex<n && ch==s[ex] ){
                ex++;
                cnt++;
                
            }
            in=ex;
            vc.push_back({ch,cnt});
            cnt=0;
            
        }
        int tc=0;
        tc=vc.size();
        int ans = tc;
        for(int i=1;i<vc.size()-1;i++){
            // if left and rght are equal
            if(vc[i-1].first == vc[i+1].first && vc[i].second ==1){
                int ttc=tc;
                ans=min(ans,ttc-2);
            } 
            else if(vc[i].second==1) ans=min(ans,tc-1);
        }
        
        cout << ans << endl;
    }
}
