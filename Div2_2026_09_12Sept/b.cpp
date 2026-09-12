#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        if(n==1 && k==0){
            cout << -1 << endl;
        }
        else if(n==1 && k==1){
            cout << 1 << endl;
        }
        else if(n==k){
            vector<vector<int>> v(n+1,vector<int>(n+1,0));
            for(int i=1;i<=n;i++) v[i][i]=i;
            int mx=n*n;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==j) continue;
                    v[i][j]=mx;
                    mx--;
                }
            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    cout << v[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if(k>n && k<2*n){
            vector<vector<int>> v(n+1,vector<int>(n+1,0));
            int st=2*n-k;
            for(int i=1;i<=st;i++){
                v[i][i]=i;
            }
            for(int i=st+1;i<=n;i++){
                v[i][1]=i;
            }
            int nxt=n+1;
            for(int i=st+1;i<=n;i++){
                v[1][i]=nxt;
                nxt++;
            }
            int mx=n*n;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(v[i][j]!=0) continue;
                    v[i][j]=mx;
                    mx--;
                }
            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    cout << v[i][j] << " ";
                }
                cout << endl;
            }
        }
        else cout << -1 << endl;
    }
}
