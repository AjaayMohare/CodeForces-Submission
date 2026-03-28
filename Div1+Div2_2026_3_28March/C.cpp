#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    int k;
	    cin >> n >> k;
	    vector<int> a(n);
	    vector<int> b(n);
	    for(int i=0;i<n;i++) cin >> a[i];
	    for(int i=0;i<n;i++) cin >> b[i];
	    
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        if(b[i]>0) m[b[i]]++;
	    }
	    
	    vector<int> tp;
	    for(int i=n-1;i>=0;i--){
	        if(!m.count(a[i])) tp.push_back(a[i]);
	    }
	    reverse(tp.begin(),tp.end());
	    
	    if(tp.size()){
	        for(int i=n-1;i>=0;i--){
	            if(b[i]==-1){
	                b[i]=tp.back();
	                tp.pop_back();
	            }
	        }
	    }
	    
	    unordered_map<int,int> cma, cmb;
	    int st = 0;
	    bool ok = true;
	    int diff = 0;
	    
	    for(int i=0;i<n;i++){
	        if(cma[a[i]] == cmb[a[i]]) diff++;
	        cma[a[i]]++;
	        if(cma[a[i]] == cmb[a[i]]) diff--;
	        
	        if(cma[b[i]] == cmb[b[i]]) diff++;
	        cmb[b[i]]++;
	        if(cma[b[i]] == cmb[b[i]]) diff--;
	        
	        if(i>=k-1){
	            if(diff != 0) ok = false;
	            
	            if(cma[a[st]] == cmb[a[st]]) diff++;
	            cma[a[st]]--;
	            if(cma[a[st]] == cmb[a[st]]) diff--;
	            
	            if(cma[b[st]] == cmb[b[st]]) diff++;
	            cmb[b[st]]--;
	            if(cma[b[st]] == cmb[b[st]]) diff--;
	            
	            st++;
	        }
	    }
	    
	    if(ok==true) cout << "yes" << endl;
	    else cout << "no" << endl;
	}
}
c
