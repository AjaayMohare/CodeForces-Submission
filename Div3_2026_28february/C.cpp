#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.size()==0) st.push(s[i]);
            else if(st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.size()) cout << "No" << endl;
        else  cout << "yes" << endl;
     }
}
