#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v((n/k)+1,0);
        for(int i=0;i<n;i++){
            // where to go 
            int f = (i/k);
            v[f]+=(s[i]-'0');
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            int val = v[i];
            if(val==k) ans++;
        }
        
        cout << ans << endl;
    }
}
