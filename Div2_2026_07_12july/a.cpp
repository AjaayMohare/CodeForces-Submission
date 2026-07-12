#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i+=2){
            v[i] = i+2;
            v[i+1] = i+1;
        }

        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }

    
}
