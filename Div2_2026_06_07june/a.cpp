#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }

        bool flag = false;
        sort(v.rbegin(), v.rend());

        for (int i = 0; i < v.size() && !flag; i++) {
            for (int j = i + 1; j < v.size(); j++) {

                int x = v[i];
                int y = v[j];

                unordered_map<int, int> mc;
                mc[x]++;
                mc[y]++;

                bool ok = true;
                int len = n - 2;

                while (len) {
                    len--;

                    if (y == 0) {
                        ok = false;
                        break;
                    }

                    int rem = x % y;
                    mc[rem]++;

                    if (mc[rem] > m[rem]) {
                        ok = false;
                        break;
                    }

                    x = y;
                    y = rem;
                }

                if (!ok) continue;

                if (mc.size() != m.size()) continue;

                bool same = true;
                for (auto &p : m) {
                    if (mc[p.first] != p.second) {
                        same = false;
                        break;
                    }
                }

                if (same) {
                    cout << v[i] << " " << v[j] << '\n';
                    flag = true;
                    break;
                }
            }
        }

        if (!flag)
            cout << -1 << '\n';
    }

    return 0;
}
