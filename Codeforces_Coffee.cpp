#include <iostream>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    int v[200002] = {0};
    int pref[200002] = {0};

    while (n--) {
        int l, r;
        cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }

    for (int i = 1; i <= 200000; i++) {
        v[i] += v[i - 1];
        pref[i] = pref[i - 1] + (v[i] >= k);
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << endl;
    }

    return 0;
}