#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int mx=1,c = 1;

    for(int i = 1; i < n; i++) {
        if(v[i] == v[i - 1]) c++;
        else c= 1;

        mx = max(mx, c);
    }

    if(mx >= m) cout << "no" << endl;
    else cout << "yes" << endl;
    }
}
