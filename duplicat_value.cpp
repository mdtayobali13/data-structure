#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int x;
    cin>>x;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if(a[i]==x){
           found = true;
           break;
        }
    }

    if(found == true)cout<<"true"<<endl;
    else cout<<"false"<<endl;
    
    return 0;
}