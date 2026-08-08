#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;

        int ans = 0;

        if(x == 0){
            int len = x + y;
            for(int i = 1; i * i <= len; i++){
                if(len % i == 0){
                    ans++;
                    if(i != len / i) ans++;
                }
            }
            cout << ans << endl;
            
        }
        else if(y == 0){
            int len = x + y;
            for(int i = 1; i * i <= len; i++){
                if(len % i == 0){
                    ans++;
                    if(i != len / i) ans++;
                }
            }
            cout << ans << endl;
            
        }
        else if(x == y){
            cout << 1 << endl;

        }
        else{
            int len = abs(x - y);
            for(int i = 1; i * i <= len; i++){
                if(len % i == 0){
                    ans++;
                    if(i != len / i) ans++;
                }
            }
            cout << ans << endl;
            
        }
        for(int i = 0; i < y; i++) cout << -1 << " ";
        for(int i = 0; i < x; i++) cout << 1 << " ";
        cout << endl;
    }
}
