#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_set<long long> s;
    bool flag = false;

    for (int i = 0; i < n; i++) {
        if (s.find(a[i]) != s.end()) {
            flag = true;
            break;
        }
        s.insert(a[i]);
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
