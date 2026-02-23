#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if((x-2*y)%3 ==0 && x>=2*y && x>=-4*y) cout << "Yes" << endl;
	    else cout << "No" <<endl;
	}
 
}
