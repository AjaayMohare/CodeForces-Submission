#include <bits/stdc++.h>
using namespace std;
 
int main()
{   int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
 
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        bool cont = true;
 
        while(cont){
            cont = false;
            for(int i = 0; i < n; i++){
                if(2*i+1 < n && a[i] > a[2*i+1]){
                    swap(a[i], a[2*i+1]);
                    cont = true;
                }
            }
        }
 
        bool ok = true;
 
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                ok = false;
                break;
            }
        }
 
        if(ok){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}
