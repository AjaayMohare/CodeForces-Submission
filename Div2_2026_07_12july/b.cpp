#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n == 2){
            cout << -1 << endl;
            continue;
        }
        vector<long long> v(n);

        if(n == 1){
            v[0] = 1;
        }
        else{
            v[0] = 1;
            v[1] = 2;
            v[2] = 3;

            long long sum = 6;

            for(int i=3;i<n;i++){
                v[i] = sum;
                sum *= 2;
            }
        }
         for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }

}
