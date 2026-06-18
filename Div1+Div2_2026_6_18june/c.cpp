#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)  cin >> a[i];
        long long cur = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] >= cur) cur = a[i];
            else cur += a[i];
        }

        cout << cur << endl;
    }

    return 0;
}
