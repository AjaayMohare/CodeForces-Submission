#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        //     int r=0;
        // int l=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='L') l++;
        // }
        // for(int i=0;i<n;i++){
        //     if(s[i]=='R') r++;
        //     else l--;
        //     int pair = 0;
        //     if(s[i]=='R') pair+=l;
        //     else pair+=r;
        //     cout << pair << " ";
        // }
        // cout << endl;
        long long ans=LLONG_MAX;
        for(int a=0;a<=n;a++){
            long long dp[101][101];
            for(int i=0;i<=n;i++){
                for(int j=0;j<=n;j++){
                    dp[i][j]=LLONG_MAX;
                }
            }
            dp[0][0]=0;
            for(int i=0;i<n;i++){
                for(int r=0;r<=i;r++){
                    if(dp[i][r]==LLONG_MAX) continue;
                    if(r>=k) dp[i+1][r]=min(dp[i+1][r],dp[i][r]+(s[i]=='R'));
                    int l=(n-a)-(i-r);
                    if(r<a&&l>=k) dp[i+1][r+1]=min(dp[i+1][r+1],dp[i][r]+(s[i]=='L'));
                }
            }
            ans=min(ans,dp[n][a]);
        }
        if(ans==LLONG_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}
