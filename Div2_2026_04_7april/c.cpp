#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m,a,b;
        cin >> n >> m >> a >> b;

        int  x = gcd(n,a);
        int y = gcd(m,b);
        int z = gcd(n,m);

        if(x==1 && y==1 && z<=2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


}
