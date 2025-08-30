#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n); 

    while (q--)
    {
        int x;
        cin >> x;

        bool isFound = false;
        int l = 0, r = n - 1;

        while (l <= r)  
        {
            int mid = (l + r) / 2;

            if (a[mid] == x)
            {
                isFound = true;
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

        if (isFound)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}
