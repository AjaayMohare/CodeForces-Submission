#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        set<int> s;
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            s.insert(a);
        }
        if(s.count(67)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
