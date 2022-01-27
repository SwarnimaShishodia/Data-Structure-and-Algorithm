#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>adj[5];
    int u,v;
    for(int i=0; i<5; i++)
    {
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    
    for(int i=0; i<5; i++)
    {
        cout<<i;
        for(auto x: adj[i])
        cout<<"->"<<x;
        cout<<endl;
    }

    return 0;
}
