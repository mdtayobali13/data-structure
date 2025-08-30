#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector<int> ans(v);

    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v2.push_back(y);
    }

    ans.insert(ans.begin() + 0, v2.begin(), v2.end());


    for(int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
