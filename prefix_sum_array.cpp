#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;

    vector<long long> a(n), pre(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i - 1];
    }

    while (q--) {
        long long l, r;
        cin >> l >> r;
        l--; 
        r--;

        long long sum;
        if (l == 0) sum = pre[r];
        else sum = pre[r] - pre[l - 1];

        cout << sum << "\n";
    }

    return 0;
}
