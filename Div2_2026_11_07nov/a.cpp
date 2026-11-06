#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    // all 0 0 
	    // n*n-1
	    // n/2 or n/2 
	    int mx=0;
	    for(int i=1;i<=n;i++){
	        int v1 = i ;
	        int v2 = n-i;
	        int pr = v1*v2;
	        mx=max(mx,pr) ;
	    }
	    cout << mx << endl;
	}

}
