#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++) cin >> v[i];
	    int val;
	    if(n==1) val=1;
	    else val = 2;
	    for(int i=0;i<n;i++) v[i] = val;
	    for(int i=0;i<n;i++) cout << v[i] << " ";
	    cout << endl;
	}

}
