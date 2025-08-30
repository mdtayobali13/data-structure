#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); 
    bool flag = false;

    while (q--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
     if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    return 0;
}
