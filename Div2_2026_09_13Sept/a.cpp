#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++) cin >> v[i];
	   // vector<int> sr = v;
	   // map<int,int> m;
	   // for(int i=0;i<n;i++) m[v[i]]=i;
	   // sort(sr.begin(),sr.end());
	    vector<int> diff;
	   // for(int i=0;i<n;i++){
	   //     if(v[i]!=sr[i]) diff.push_back(m[v[i]]);
	   // }
	   // sort(diff.begin(),diff.end());
	   // vector<int> ac = v;
	   vector<int> ac(n);
	   vector<int> fin;
	   for(int i=0;i<n;i++) ac[i]=i+1;
	   for(int i=0;i<n;i++){
	       if(ac[i]!=v[i]) diff.push_back(v[i]);
	   }
	   for(int i=0;i<n;i++){
	       if(ac[i]!=v[i]){
	           fin.push_back(diff.back());
	           diff.pop_back();
	       }
	       else fin.push_back(v[i]);
	   }
	   //for(auto i : fin) cout << i << " ";
	   //cout << endl;
	   if(fin==ac) cout << "yes" << endl;
	   else cout << "no" << endl;
	}

}
