#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int od=0;
       int ev=0;
       int a=0,b=0,c=0;
       vector<int> v(n,0);
       for(int i=0;i<n;i++){
           int val;
           cin >> val;
            if(val&1) a++;
            else if(val%4==0) b++;
            else c++;
           
       }
       cout << max({a,b,c}) << endl;
    }
}
