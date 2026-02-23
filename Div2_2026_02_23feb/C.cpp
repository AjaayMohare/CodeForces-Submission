#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int ans = 0;
        vector<int> s;  
 
        for(int i = 0; i < n; i++){
 
            int x = v[i];
 
            if(s.size() == 0){
                ans++;
                s.push_back(x);
            }
            else{
                if(x == s.back() + 1){
                    s.push_back(x);
                }
                else{
                    while(s.size() && s.back() >= x){
                        s.pop_back();
                    }
 
                    if(s.size() && x == s.back() + 1){
                        s.push_back(x);
                    }
                    else{
                        ans++;
                        s.clear();
                        s.push_back(x);
                    }
                }
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
