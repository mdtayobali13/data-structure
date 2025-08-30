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

    bool isPelindrome  = true;

    for (int i = 0; i < n; i++)
    {
        if(v[i]!= v[n - 1 - i]){
            isPelindrome = false;
            break;
        }
    }
    
    if(isPelindrome){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}