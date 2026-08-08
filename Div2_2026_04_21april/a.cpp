#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long long x,y;
        cin >> x >> y;
        long long z  = ceil(y/x);
        if(z>2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
