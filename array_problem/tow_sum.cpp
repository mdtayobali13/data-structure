#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n , t;
        cin >> n >> t;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<pair<int,int>> ans;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)   // ✅ i+1 থেকে শুরু
            {
                if (v[i] + v[j] == t)
                {
                    ans.push_back({v[i], v[j]});
                }
            }
        }

        if (ans.empty())
        {
            cout << "-1 -1" << endl;
        }
        else
        {
            for (auto &p : ans)
            {
                cout << p.first << " " << p.second << endl;
        
            }
        }
    }
    return 0;
}
