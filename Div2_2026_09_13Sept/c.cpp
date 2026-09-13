#include <bits/stdc++.h>
using namespace std;
long long mod = 998244353;
long long power(long long a,long long b){
    long long ans = 1;
    while(b){
        if(b&1) ans = ans*a%mod;
        a = a*a%mod;
        b/=2;
    }
    return ans;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<long long> a(n);
	    // inv fact need
	    for(int i=0;i<n;i++) cin >> a[i];
	    sort(a.begin(),a.end());
	    bool ok=true;
	    for(int i=1;i<n;i++){
	        if(a[i] == a[i-1]) ok = false;
	    }
	    if(!ok){
	        cout << -1 << endl;
	        continue;
	    }
	    long long fact=1;
	    for(int i=1;i<n;i++){
	        fact = fact*i%mod;
	    }
	    vector<long long> su(n+1,0);
	    for(int i=n-1;i>=0;i--){
	        su[i] = (su[i+1]+a[i])%mod;
	    }
	    long long ans = 0;
	    for(int i=0;i<n-1;i++){
	        long long k = n-1-i;
	        long long el = (su[i+1]-k*a[i])%mod;
	        if(el<0) el+=mod;
	        long long ways = (fact*power(k,mod-2))%mod;
	        ans = (ans+ways*el)%mod;
	    }
	    cout << ans << endl;
	}
}
