
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin >> t;
	while(t--){
	    ll n; cin >> n;
	    vector<ll> a(n);
	    for(int i=0;i<n;i++) cin >> a[i];
	    sort(a.rbegin(),a.rend());
	    // dont let the diff increase by one 
	    ll h1=0,h2=0;
	    for(int i=0;i<n;i++){
	        h2+=(1LL<<a[i]);
	    }
	    for(int i=0;i<n;i++){
	        ll v1=1LL<<a[i];
	        if(h1+v1<=h2/2) h1+=v1;
	    }
	    cout << h1*(h2-h1) << endl;
	}
}
