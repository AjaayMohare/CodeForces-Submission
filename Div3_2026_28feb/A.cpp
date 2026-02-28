#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        map<int,int> m;
        int mx = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            {
                cin >> a[i];
            m[a[i]]++;
            mx=max(mx,a[i]);
            }
        
        
        cout << m[mx]<< endl; 
    }
}
