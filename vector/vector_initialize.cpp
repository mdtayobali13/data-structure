#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; type---1
    // vector<int> v(5);type---2

    // vector<int> v(5 , 10); type ---3

    // vector<int> v(5 , 5); type --- 4
    // vector<int> v2(v);type --- 4

    // int a[6] = {10,20,30,40,50}; type --- 5
    // vector<int>v(a,a+5); type --- 5

    vector<int> v = {10 , 20 , 30  };  

    cout<<v.size()<<endl; 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}