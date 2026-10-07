#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        vector<int> st;
        vector<int> us;
        for(int i=1;i<=n;i++){
            int el=s[i-1]-'0';
            if(el==1){
                // scanning
                st.push_back(i);
            }
            else if(el==2){
                if(st.size()){
                    st.pop_back();
                   us.push_back(i);
                }
                
            }
            else{
                continue;
            }
        }
        while(us.size()){
            st.push_back(us.back());
            us.pop_back();
        }
        sort(st.begin(),st.end());
        cout << st.size() << endl;
        for(int i=0;i<st.size();i++) cout << st[i] << " ";
        cout << endl;
    }
}
