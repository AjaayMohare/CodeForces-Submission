
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> all;
        for(int i=0;i<n;i++){
            string y ;
            for(int j = i;j<n;j++){
                y.push_back(s[j]);
            }
            for(int j=0;j<i;j++){
                y.push_back(s[j]);
            }
            all.push_back(y);
                    
        }
        int mx = 0;
        // for(int i=0;i<all.size();i++){
        //     cout << all[i] << endl;
        // }
        for(int i = 0 ;i<all.size();i++){
            string ch  = all[i];
            int cnt = 1 ;
            for(int i=1;i<n;i++){
                if(ch[i-1]!=ch[i]) cnt++;
            }
            mx=max(mx,cnt);
        }
        cout << mx << endl;
    }
}
