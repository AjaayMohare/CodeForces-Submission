#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n,0);
        for(int i=0;i<n;i++) cin >> v[i];
        vector<int> o,t,th;
        o.push_back(0);
        t.push_back(0);
        th.push_back(0);
        for(int i=0;i<n;i++){
            if(v[i]==1) o.push_back(o.back()+1);
            else o.push_back(o.back()+0);
            if(v[i]==2) t.push_back(t.back()+1);
            else t.push_back(t.back()+0);
            if(v[i]==3) th.push_back(th.back()+1);
            else th.push_back(th.back()+0);
        }
        // reverse(o.begin(),o.end());
        // o.pop_back();
        // reverse(o.begin(),o.end());
        // reverse(t.begin(),t.end());
        // t.pop_back();
        // reverse(t.begin(),t.end());
        // reverse(th.begin(),th.end());
        // th.pop_back();
        // reverse(th.begin(),th.end());
        // for(int i=0;i<n;i++) cout <<o[i] << " ";
        // cout << endl;
        // for(int i=0;i<n;i++) cout <<t[i] << " ";
        // cout << endl;
        // for(int i=0;i<n;i++) cout <<th[i] << " ";
        // cout << endl;
        vector<int> pre(n+1,0);
        for(int i=0;i<=n;i++){
            pre[i]=(o[i]+t[i])-th[i];
        }

        vector<int> suf(n+1,INT_MIN);
        suf[n-1]=pre[n-1];

        for(int i=n-2;i>=0;i--){
            suf[i]=max(suf[i+1],pre[i]);
        }

        bool ok=false;

        for(int i=0;i<=n-3;i++){
            int len=i+1;
            int one=o[i+1];

            if(one>=len-one){
                if(suf[i+2]>=pre[i+1]){
                    ok=true;
                    break;
                }
            }
        }

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
