#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m; cin >> n >> m;
	    vector<long long> a(n);
	    for(int i=0;i<n;i++) cin >> a[i];
	    // we have to take only m 
	    // then find the score 
	    priority_queue<long long> pq;
        long long su = 0;
        long long ans = LLONG_MIN;
        for(int i=0;i<n;i++){
            if(pq.size() == m-1){
                ans = max(ans, m*a[i]- su);
            }
            pq.push(a[i]);
            su+=a[i];
            if(pq.size()>m-1){
                su-=pq.top();
                pq.pop();
            }
        }
        cout << ans << endl;
	    
	}

}
