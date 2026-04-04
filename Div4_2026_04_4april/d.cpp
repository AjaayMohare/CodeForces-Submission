#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> p;
    vector<bool> ch(200000, true);

    for(int i = 2; i < 200000; i++){
        if(ch[i]){
            p.push_back(i);
            for(int j = i * 2; j < 200000; j += i){
                ch[j] = false;
            }
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
            cout << 1LL * p[i] * p[i+1] << " ";
        }
        cout << endl;
    }
}
