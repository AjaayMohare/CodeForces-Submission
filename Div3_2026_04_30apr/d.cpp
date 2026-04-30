#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(2*n);
        for(int i = 0; i < 2*n; i++){
            cin >> v[i];
        }

        vector<int> lp(n, -1), rp(n, -1);

        for(int i = 0; i < 2*n; i++){
            if(lp[v[i]] == -1){
                lp[v[i]] = i;
            }
            rp[v[i]] = i;
        }

        int ans = 1;

        for(int i=0;i<4;i++){
            int l = lp[0];
            int r = rp[0];

            if(i==0){
                int le = l-1;
                int re = l+1;
                while(le>=0 && re<2*n){
                    if(v[le]==v[re]){
                        le--;
                        re++;
                    }
                    else break;
                }
                le++;
                re--;

                vector<int> cr(n+1,-1);
                for(int j=le;j<=re;j++) cr[v[j]]=1;

                for(int j=0;j<=n;j++){
                    if(cr[j]==-1){
                        ans=max(ans,j);
                        break;
                    }
                }
            }

            else if(i==1){
                int le = r-1;
                int re = r+1;
                while(le>=0 && re<2*n){
                    if(v[le]==v[re]){
                        le--;
                        re++;
                    }
                    else break;
                }
                le++;
                re--;

                vector<int> cr(n+1,-1);
                for(int j=le;j<=re;j++) cr[v[j]]=1;

                for(int j=0;j<=n;j++){
                    if(cr[j]==-1){
                        ans=max(ans,j);
                        break;
                    }
                }
            }

            else if(i==2){
                int le = l;
                int re = r;

                bool ok = true;
                int tl = le, tr = re;
                while(tl < tr){
                    if(v[tl] != v[tr]){
                        ok = false;
                        break;
                    }
                    tl++;
                    tr--;
                }

                if(ok){
                    vector<int> cr(n+1,-1);
                    for(int j=le;j<=re;j++) cr[v[j]]=1;

                    for(int j=0;j<=n;j++){
                        if(cr[j]==-1){
                            ans=max(ans,j);
                            break;
                        }
                    }
                }
            }

            else if(i==3){
                int le = l;
                int re = r;

                bool ok = true;
                int tl = le, tr = re;
                while(tl < tr){
                    if(v[tl] != v[tr]){
                        ok = false;
                        break;
                    }
                    tl++;
                    tr--;
                }

                if(ok){
                    while(le-1 >= 0 && re+1 < 2*n && v[le-1] == v[re+1]){
                        le--;
                        re++;
                    }

                    vector<int> cr(n+1,-1);
                    for(int j=le;j<=re;j++){
                        cr[v[j]] = 1;
                    }

                    for(int j=0;j<=n;j++){
                        if(cr[j]==-1){
                            ans = max(ans,j);
                            break;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }
}
