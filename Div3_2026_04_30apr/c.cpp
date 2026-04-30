#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++) cin >> v[i];
	    for(int i=0;i<n;i++){
	        	        if(v[i]==0) continue;

	        if(v[i]%3==0 && v[i]%2!=0){
	            cout << v[i] << " ";
	            v[i]=0;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(v[i]==0) continue;
	        if(v[i]%2!=0 && v[i]%3!=0 && v[i]%6!=0){
	            cout << v[i] << " ";
	            v[i]=0;
	        }
	    }
	    for(int i=0;i<n;i++){
	        	        if(v[i]==0) continue;

	        if(v[i]%2==0 && v[i]%3!=0 ){
	            cout << v[i] << " ";
	            v[i]=0;
	        }
	    }
	   // for(int i=0;i<n;i++){
	   //     	        if(v[i]==0) continue;

	   //     if(v[i]%3==0 && v[i]%2!=0){
	   //         cout << v[i] << " ";
	   //         v[i]=0;
	   //     }
	   // }
        for(int i=0;i<n;i++){
            	        if(v[i]==0) continue;

	        if(v[i]%6==0 ){
	            cout << v[i] << " ";
	            v[i]=0;
	        }
	    }
	    cout << endl;
	}

}
