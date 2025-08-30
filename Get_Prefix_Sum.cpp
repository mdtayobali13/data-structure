#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> frq(n); 

    for (int i = 0; i < n; i++)
        cin >> a[i];

    frq[0] = a[0];

    for (int i = 1; i < n; i++) 
        frq[i] = a[i] + frq[i-1];


    for (int i = n-1; i >= 0; i--)
        cout << frq[i] << " ";

    return 0;
}
