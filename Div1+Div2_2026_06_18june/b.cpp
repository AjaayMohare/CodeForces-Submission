#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        vector<int> p(n,-1);
        vector<int> u(n,0);

        bool ok = true;

        for(int i=0;i<n;i++){

            int in = lower_bound(b.begin(),b.end(),a[i]) - b.begin();

            while(in<n && u[in]) in++;

            if(in==n){
                ok=false;
                break;
            }

            p[i]=in;
            u[in]=1;
        }

        if(!ok){
            cout << -1 << endl;
            continue;
        }

        long long op=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

                if(p[i]>p[j]) op++;

            }
        }

        cout << op << endl;
    }

    return 0;
}
