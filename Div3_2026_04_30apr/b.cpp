#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n; cin >> n;
	    string s;
	    cin >> s;
	    int c = 0,ic =0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='(') c++;
	        else ic++;
	    }
	    if(c==ic) cout << "yes" << endl;
	    else cout << "no" << endl;
	    

	}

}
