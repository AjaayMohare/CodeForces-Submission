#include <bits/stdc++.h>
using namespace std;

int main() {
   long long t;
    cin >> t;

    while (t--) {
        long long p, q;
        cin >> p >> q;

        long long val = 2 * (p + 2 * q) + 1;
        bool ok = false;

        vector<pair<long long, long long>> f;

        for (long long i = 1; i * i <= val; i++) {
            if (val % i == 0) {
                f.push_back({i, val / i});
                if (i != val / i) f.push_back({val / i, i});
            }
        }

        for (auto &x : f) {
            long long a = x.first;
            long long b = x.second;

            if (a >= 3 && b >= 3) {
                long long r = (a - 1) / 2;
                long long c = (b - 1) / 2;

                long long mx = r * c + min(r, c);

                if (mx >= q) {
                    cout << r << " " << c << endl;
                    ok = true;
                    break;
                }
            }
        }

        if (ok==false) cout << -1 << endl;
    }

    return 0;
}
