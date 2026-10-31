#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(y>=z){
            string out(x+y+z,'R');
            cout << out << endl;
        }
        else if(x<=z){
            string out(x+y+z,'S');
            cout << out << endl;
        }
        else{
            string out(x+y+z,'P');
            cout << out << endl;
        }
    }
}
