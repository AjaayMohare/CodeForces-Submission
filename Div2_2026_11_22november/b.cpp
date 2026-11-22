#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	   // long long x;
	   // cin >> x;
	   // // o e e o 
	   // // o o e e 
	   // // e o o e 
	   // // e e o o 
	   // // if any not works then NO 
	   // // else yes 
	   // if(x%2==0 && x%4!=0) cout << "No" << endl;
    //     else cout << "Yes" << endl;
    
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int ans = 0;
        int cnt=1;
        // for(int i=0;i<k;i++){
        //     bool ok = true;
        //     for(int j=i;j<n-k+i;j++){
        //         if(a[j]!=a[j+1]){
        //             ok = false;
        //             break;
        //         }
        //     }
        //     if(ok) ans++;
        // }
        // cout << ans << endl;
        for(int i=0;i<n;i++){
            if(i>0){
                if(a[i]==a[i-1]) cnt++;
                else cnt=1;
            }
            if(cnt>=n-k+1) ans++;
        }
        cout << ans << endl;
	}

}
