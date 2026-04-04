#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // 3*n
        vector<int> v;
        long long s =1;
        long long l =3*n;
        while(s<=n){
            cout << s << " ";
            s++;
            cout << l << " ";
            l--;
            cout << l << " ";
            l--;
            
        }
        
        cout << endl;
    }
}
