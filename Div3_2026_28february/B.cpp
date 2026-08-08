#include <bits/stdc++.h>
using namespace std;
int ans = INT_MAX;
void vo(vector<int> v ,int in,vector<int> a,vector<int> b){
    if(in == v.size() || a ==b){
        ans = min(ans,(int)a.size());
        return ;
    }
    vo(v,in+1,a,b);
    v[in]=-1;
    a.clear();
    b.clear();
    for(int i=0;i<v.size();i++){
        if(v[i]!=-1) a.push_back(v[i]);
    }
    b=a;
    sort(b.begin(),b.end());
    vo(v,in+1,a,b);
    
}
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        ans = INT_MAX;
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        vector<int> a=v;
        vector<int> b=a;
        sort(b.begin(),b.end());
        if(a==b) cout << n << endl;
        else cout << 1 << endl;
        
    }
}
