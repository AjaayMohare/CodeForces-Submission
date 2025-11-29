#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,r,y;
        cin >> n >> y >>r;
        int l = r + (y/2);
        cout << min(l,n) << endl;
    }
 
}
