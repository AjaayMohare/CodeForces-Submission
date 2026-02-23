#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool ok1 = true;
        bool ok2 = false;

        for (int i = 0; i < n; i++) {
            int rem = n - i;
            int f = (rem - 1) % 2;

            bool c1 = false;
            bool c2 = false;

            for (int lp = 0; lp < 2; lp++) {

                bool cur;
                if (lp == 0) cur = ok1;
                else cur = ok2;

                if (!cur) continue;

                char lc;
                if (lp == 0) lc = 'a';
                else lc = 'b';

                int rp;
                if (f == 0) rp = lp;
                else {
                    if (lp == 0) rp = 1;
                    else rp = 0;
                }

                char rc;
                if (rp == 0) rc = 'a';
                else rc = 'b';

                if (s[i] == '?' || s[i] == lc) {
                    int np;
                    if (lp == 0) np = 1;
                    else np = 0;

                    if (np == 0) c1 = true;
                    else c2 = true;
                }

                if (s[i] == '?' || s[i] == rc) {
                    if (lp == 0) c1 = true;
                    else c2 = true;
                }
            }

            ok1 = c1;
            ok2 = c2;
        }

        if (ok1 || ok2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
