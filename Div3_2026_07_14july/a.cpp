#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int i=0;
        while(i<n){
            if(s[i]=='*'){
                i++;
                continue;
            }
            int j=i;
            while(j<n&&s[j]=='#'){
                j++;
            }
            int len=j-i;
            ans=max(ans,(len+1)/2);
            i=j;
        }
        cout<<ans<<endl;
    }
}
