#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<int> v(n);
 
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
 
        vector<int> a(7), b(7);
 
        for(int i = 1; i <= 6; i++){
            if(v[0] == i){
                a[i] = 0;
            }
            else{
                a[i] = 1;
            }
        }
 
        for(int i = 1; i < n; i++){
            for(int j = 1; j <= 6; j++){
                b[j] = INT_MAX;
            }
 
            for(int j = 1; j <= 6; j++){
                for(int k = 1; k <= 6; k++){
                    if(k != j && k != 7-j){
                        int c = a[j];
                        if(v[i] != k){
                            c++;
                        }
                        b[k] = min(b[k], c);
                    }
                }
            }
 
            a = b;
        }
 
        int ans = INT_MAX;
 
        for(int i = 1; i <= 6; i++){
            ans = min(ans, a[i]);
        }
 
        cout << ans << endl;
    }
}
