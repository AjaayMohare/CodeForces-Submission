#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int o=0,z=0;
        for(int  i=0;i<n;i++){
            int x; cin >> x;
            if(x&1) o++;
            else z++;
        }
        if(o>=z) cout << "Bessie" << endl;
        else  cout << "Elsie" << endl;
    }
}
