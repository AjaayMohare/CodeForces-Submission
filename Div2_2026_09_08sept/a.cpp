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
        int e=0;
        int h=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]==0) e++;
            else h++;
        }
        if(e<=1) {
            cout << -1 << endl;
            continue;
        }
        if(v[0]==0 && v[n-1]==0) cout << 0 << endl;
        else if(v[0]==1 && v[n-1]==0) cout << 1 << endl;
        else if(v[0]==0 && v[n-1]==1) cout << 1 << endl;
        else cout << 2 << endl;
    }
}
