#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        bool ans = false;

        for (int i = 0; i < 2; i++) {
            string p = "";

            for (int j = 0; j < n; j++) {
                if ((j + i) % 2 == 0) p += 'a';
                else p += 'b';
            }

            int l = -1, r = -1;

            for (int j = 0; j < n; j++) {
                if (s[j] != p[j]) {
                    if (l == -1) l = j;
                    r = j;
                }
            }

            if (l == -1) {
                ans = true;
                break;
            }

            bool x = true, y = true;

            for (int j = l; j <= r; j++) {
                char c = s[l + r - j];

                if (p[j] != c) x = false;

                if (c == 'a') c = 'b';
                else c = 'a';

                if (p[j] != c) y = false;
            }

            if (x || y) {
                ans = true;
                break;
            }
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
