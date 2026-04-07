#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int si;
        cin >> si;
        si--;

        int valu = v[si];

        int cntl = 0, cntr = 0;
        int fll = 0, flr = 0;

        for(int i=0;i<si;i++){
            int val = v[i];
            if(fll%2) val = 1 - val;

            if(val != valu){
                cntl++;
                fll++;
            }
        }

        for(int i=n-1;i>si;i--){
            int val = v[i];
            if(flr%2) val = 1 - val;

            if(val != valu){
                cntr++;
                flr++;
            }
        }

        int cnt = max(cntl, cntr);

        if(cnt % 2) cnt++;

        cout << cnt << endl;
    }
}
