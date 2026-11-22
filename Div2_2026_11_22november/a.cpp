#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long x;
	    cin >> x;
	    // o e e o 
	    // o o e e 
	    // e o o e 
	    // e e o o 
	    // if any not works then NO 
	    // else yes 
	    if(x%2==0 && x%4!=0) cout << "No" << endl;
            else cout << "Yes" << endl;
	}

}
