#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        int cur = 0;

        for(int b = 30; b >= 0; b--){
            cur |= (1 << b);

            set<int> s;
            for(int i = 0; i < n; i++){
                s.insert(a[i] & cur);
            }

            int temp = ans | (1 << b);

            for(auto x : s){
                if(s.count(x ^ temp)){
                    ans = temp;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
}
