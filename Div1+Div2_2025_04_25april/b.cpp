#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n+1);
        long long s = 0;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            s += a[i];
        }

        int o = 0, e = 0;

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;

            if (x % 2) o++;
            else e++;
        }

        vector<long long> v1, v2;

        for (int i = 1; i <= n; i++) {
            if (i % 2) v1.push_back(a[i]);
            else v2.push_back(a[i]);
        }

        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());

        long long to = 0;

        int c1 = min(o, (int)v1.size());
        int c2 = min(e, (int)v2.size());

        if (o > 0 && c1 > 0) {
            to += v1[0];
            for (int i = 1; i < c1; i++) {
                if (v1[i] > 0) to += v1[i];
            }
        }

        if (e > 0 && c2 > 0) {
            to += v2[0];
            for (int i = 1; i < c2; i++) {
                if (v2[i] > 0) to += v2[i];
            }
        }

        cout << s - to << endl;
    }

}
