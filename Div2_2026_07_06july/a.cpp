#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n,0);
        for(int i=0;i<n;i++) cin >> v[i];

        if(n==1 && v[0]>=3){
            cout << "yes" << endl;
            continue;
        }

        bool ans = false;
        int cnt = 0;

        for(int i=0;i<n;i++){
            if(v[i]>=3) ans = true;   
            if(v[i]>1) cnt++;
        }

        if(ans || cnt>=2){
            cout << "yes" << endl;
            continue;
        }

        cout << "no" << endl;
    }
}
