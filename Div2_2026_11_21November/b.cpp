

#include <bits/stdc++.h>
using namespace std;
vector<vector<vector<int>>> dp;
string s;

int mx(int x,int y,int in){
    if(in==s.size()) return x+y;
    if(dp[in][x][y]!=-1) return dp[in][x][y];
    int ans=x+y;
    if(s[in]=='+'){
        if(y>0){
            int w1=mx(x,y+1,in+1);
            ans=max(ans,w1);
        }
        if(x>0){
            int w2=mx(x-1,y+1,in+1);
            ans=max(ans,w2);
        }
    }
    else{
        if(x>0){
            int w1=mx(x-1,y,in+1);
            ans=max(ans,w1);
        }
        if(y>0){
            int w2=mx(x+1,y-1,in+1);
            ans=max(ans,w2);
        }
    }
    return dp[in][x][y]=ans;
}
int main() {
	// your code goes here
    int t;
    cin>> t;
    while(t--){
        //  int x; cin>> x;
        //  int ans =INT_MAX;
        //  for(int i=200;i>=1;i--){
        //      int op=0;
        //      int val = i;
        //      int cp=x;
        //      int tot=0;
        //      while(tot<cp && val>0){
        //          tot+=val;
        //          val--;
        //          op++;
        //      }
        //      int tr = i-1;
        //      if(tot>=cp && val>=0 ) ans=min(ans,tr+op);
        //  }
        //  cout << ans << endl;
        int x,y,m;
        cin >> x >> y >> m;
        cin >> s;
        dp.clear();
        dp.resize(m+1,vector<vector<int>>(101,vector<int>(101,-1)));
        cout << mx(x,y,0) << endl;
    }
}
