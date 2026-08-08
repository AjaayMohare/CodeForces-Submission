#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        vector<int> aone, azero;
        int oc = 0,zc = 0;
 
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                oc++;
                aone.push_back(i+1);
            }
            else{
                zc++;
                azero.push_back(i+1);
            }
        }
 
        string chec(n,'0');
        if(chec == s){
            cout << 0 << endl;
            continue;
        }
 
        if(oc % 2 == 0){
            cout << oc << endl;
            for(int i = 0; i < oc; i++){
                cout << aone[i] << " ";
            }    
            cout << endl;
        }
        else if(zc % 2 == 1){
            cout << zc << endl;
            for(int i = 0; i < zc; i++){
                cout << azero[i] << " ";
            }    
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
