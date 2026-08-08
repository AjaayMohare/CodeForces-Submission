#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
        cin >> n;

        vector<pair<int,int>> v;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v.push_back({100 / a, a});
        }

        sort(v.begin(), v.end());

        long long r = 0;
        for (int i = 0; i < n; i++) {
            int val = v[i].first;
            int cnt = v[i].second;

            if (val > r + 1) break;

            r += 1LL * val * cnt;
        }

        if (r >= 100LL * n) cout << "YES" << endl;
        else cout << "NO" << endl;
	    
	}

}
