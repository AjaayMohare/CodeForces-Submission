#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        vector<int> sam(n,1);
        if(sam==a){
            cout << -1 << endl;
            continue;
        }
        // dont waste weight 
        if(n==2){
            cout << a[0]+a[1]-1 << endl;
            continue;
        }
        int md=0;
        int ex=n-2;
        for(int i=1;i<n-1;i++) md+=a[i];
        if(md!=ex){
            // cout << "HERE" << endl;
            // cout << "md is" << md << endl;
            cout << a[0]+a[n-1]+md-1 << endl;
            continue;
            
        }
        else{
            // someone has to sacrifice 
            // eirhter the last or first 
            cout << a[0]+a[n-1]-1 << endl;
        }
    }
}   
