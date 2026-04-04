#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        vector<int> v(7);
        for(int i=0;i<7;i++) cin >> v[i];
        long long sum = INT_MIN;
        for(int i=0;i<7;i++){
            long long ans = 0;
            vector<int> p =v;
            for(int j=0;j<7;j++){
                if(j==i) ans+=v[j];
                else ans+=(-v[j]);
            }
            sum=max(ans,sum);
        
        }
        cout << sum << endl;
    }
}

