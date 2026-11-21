#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>> t;
    while(t--){
         int x; cin>> x;
         int ans =INT_MAX;
         for(int i=200;i>=1;i--){
             int op=0;
             int val = i;
             int cp=x;
             int tot=0;
             while(tot<cp && val>0){
                 tot+=val;
                 val--;
                 op++;
             }
             int tr = i-1;
             if(tot>=cp && val>=0 ) ans=min(ans,tr+op);
         }
         cout << ans << endl;
    }
}
