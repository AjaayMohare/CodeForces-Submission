#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int c = 0, i = 0;

        while (i < n) {

            if (i == n - 1) {
                if (a[i] != b[i]) c++;
                i++;
            } 
            else {
                int v = 0;
                if (a[i] != b[i]) v = 1;

                int h = 0;
                if (a[i] != a[i + 1]) h++;
                if (b[i] != b[i + 1]) h++;

                if (h < v) {
                    c += h;
                    i += 2;
                } 
                else {
                    c += v;
                    i++;
                }
            }
        }

        cout << c << endl;
    }
}
