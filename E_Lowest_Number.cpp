#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int low = v[0];
    int pos = 1;

    for (int i = 0; i < n; i++)
    {
       if(v[i]<low){
         low = v[i];
         pos = i+1;
       }
    }
    cout<<low<<" "<<pos<<endl;
    return 0;
}