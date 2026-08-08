#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n,0);
        for(int i=0;i<n;i++) cin>>v[i];

        vector<int> o;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]) cnt++;
            else{
                o.push_back(cnt);
                cnt=1;
            }
        }
        o.push_back(cnt);

        sort(o.begin(),o.end());

        vector<int> th;
        for(int i=0;i<o.size();i++){
            if(i==0||o[i]!=o[i-1]) th.push_back(o[i]);
        }

        int ans=0;
        int l=0;
        long long sum=0;
        for(int i=0;i<o.size();i++) sum+=o[i];

        for(int i=0;i<th.size();i++){
            while(l<o.size()&&o[l]<th[i]){
                sum-=o[l];
                l++;
            }

            long long c=o.size()-l;
            long long s=sum;

            if((k-s)%c==0){
                long long x=(k-s)/c;
                if(x>=1-th[i]) ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
