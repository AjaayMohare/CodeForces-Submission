#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        set<int> s;
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n; i++) s.insert(v[i]);
        if(s.size()!=n) cout << -1 << endl;
        else{
            sort(v.rbegin(),v.rend());
                    for(int i = 0; i < n; i++) cout << v[i] << " ";
                    cout << endl;

        }

        
    }
}
