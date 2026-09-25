#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        int l=0;
        int r=n-1;
        int ans = 0;
        while(r>l){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[r]!=c && s[l]!=c){
                ans+=2;
                l++;
                r--;
            }
            else{
                ans++;
                l++;
                r--;
            }
        }
        
        cout << ans << endl;
    }
}
