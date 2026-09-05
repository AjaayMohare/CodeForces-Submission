#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>p;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) p.push_back(i);
        }
        int best=0,bl=-1,br=-1;
        if(p.empty()){
            int l=-1,r=-1;
            for(int i=0;i<n;i++){
                if(a[i]==-1){
                    if(l==-1) l=i;
                    r=i;
                }
            }
            if(l!=-1){
                best=r-l+1;
                bl=l;
                br=r;
            }
        }
        else{
            for(int i=1;i<p.size();i++){
                if(p[i]-p[i-1]+1>best){
                    best=p[i]-p[i-1]+1;
                    bl=p[i-1];
                    br=p[i];
                }
            }
            int l=-1;
            for(int i=0;i<p[0];i++){
                if(a[i]==-1){
                    l=i;
                    break;
                }
            }
            if(l!=-1&&p[0]-l+1>best){
                best=p[0]-l+1;
                bl=l;
                br=p[0];
            }
            int r=-1;
            for(int i=n-1;i>p.back();i--){
                if(a[i]==-1){
                    r=i;
                    break;
                }
            }
            if(r!=-1&&r-p.back()+1>best){
                best=r-p.back()+1;
                bl=p.back();
                br=r;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==-1) a[i]=0;
        }
        if(bl!=-1){
            a[bl]=1;
            a[br]=1;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
