#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n >= 22) {
            long long a;

            if (n % 12 <= 9) a = n % 12;
            else if (n % 12 == 10) a = 22;
            else a = 11;

            long long b = n - a;
            cout << a << " " << b << endl;
        }
        else {
            bool flag = false;

            for (long long a = 0; a <= n; a++) {
                long long b = n - a;

                string s = to_string(a);
                string r = s;
                reverse(r.begin(), r.end());

                if (s == r && b % 12 == 0) {
                    cout << a << " " << b << endl;
                    flag = true;
                    break;
                }
            }

            if (!flag) cout << -1 << endl;
        }
    }

}
