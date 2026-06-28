#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    /// hello
	    long long n,k;
	    cin >> n >> k;
	    // mx*k will be the answer
        long long ans = 0;
        long long c = 1;

        while (c <= n) {
            long long tk = min(k, n / c);
            ans += tk;
            n -= tk * c;
            c <<= 1;
        }

        cout << ans << endl;	    
	    
	    
	}

}
