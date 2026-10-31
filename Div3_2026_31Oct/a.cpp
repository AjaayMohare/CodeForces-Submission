#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        map<char,int> m1,m2;
        string a,b;
        cin >> a >> b;
        for(auto i : a ) m1[i]++;
        for(auto i : b)  m2[i]++;
        int cnt=0;
        if(m1.count('s')){
            m1['s']--;
            cnt++;
            if(m1['s']==0) m1.erase('s');
        }
        if(m1.count('i')){
            m1['i']--;
            if(m1['i']==0) m1.erase('i');
            cnt++;
        }
        if(m1.count('x')){
            m1['x']--;
            if(m1['x']==0) m1.erase('x');
            cnt++;
        }
        if(cnt==3 && m1==m2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
