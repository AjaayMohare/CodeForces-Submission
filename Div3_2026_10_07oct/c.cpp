#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int el; cin >> el;
            a.push_back(el);
        }
        long long ans=0;
        map<int,int> mv;
        for(int i=0;i<n-4;i++){
            int sum=a[i]+a[i+2]-a[i+4];
            ans+=mv[sum];
            mv[sum]++;
        }
        for(int i=0;i<n-6;i++){
            int sum=a[i]+a[i+2]-a[i+4];
            int sum2=a[i+2]+a[i+4]-a[i+6];
            if(sum==sum2) ans--;
        }
        for(int i=0;i<n-8;i++){
            int sum=a[i]+a[i+2]-a[i+4];
            int sum2=a[i+4]+a[i+6]-a[i+8];
            if(sum==sum2) ans--;
        }
        cout << ans << endl;
    }
}
