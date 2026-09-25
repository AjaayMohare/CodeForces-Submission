#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n); 
        for(int i=0;i<n;i++) cin >> v[i];
        map<int,int> mv;
        for(auto i : v) mv[i]++;
        vector<int> val;
        for(auto i : mv) val.push_back(i.first);
        sort(val.rbegin(),val.rend());
        while(mv.size()){
            for(int i=0;i<val.size();i++){
                int tv = val[i];
                if(mv.count(tv)){
                    cout << tv << " ";
                    mv[tv]--;
                    if(mv[tv]==0) mv.erase(tv);
                }
            }
        }
        cout << endl;
    }
}
