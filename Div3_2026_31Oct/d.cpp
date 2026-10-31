#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        // int mi coverion would be min elemnt 
        // then max comversion would be max element 
        // int ng=0;
        // int ps=0;
        // int z=0;
        // for(auto i : a){
        //     if(i<0) ng++;
        //     else if(i>0) ps++;
        //     else z++;
        // }
        // if(z==1){
        //     // sum of all elemnset 
        //     long long sum=0;
        //     for(auto i : a) sum+=abs(i);
        //     cout<< sum << endl;
        // }
        // else if(ng%2==0){
        //     long long sum=0;
        //     for(auto i : a) sum+=abs(i);
        //     cout<< sum << endl;
        // }
        // else{
        //     sort(a.begin(),a.end());
        //     for(int i=0;i<n;i++) a[i]=abs(a[i]);
        //     sort(a.begin(),a.end());
        //     long long sum =0;
        //     for(int i=1;i<n;i++) sum+=a[i];
        //     cout << sum - a[0] << endl;
        // }
        // sign dont shuift but nanmebr can 
        //  --  can be converted into ++
        sort(a.begin(),a.end());
        ll m=a[n/2];
        ll ans=0;
        for(int i=0;i<n;i++) ans+=abs(a[i]-m);
        cout << ans << " " << a[n-1]-a[0] << endl;
    }
}   
