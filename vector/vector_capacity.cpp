#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);

    // v.clear();

    v.resize(7 , 100);

    cout<<v.max_size()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
      cout<<v[i]<<" ";
    }
    

    return 0;
}