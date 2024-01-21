#include <bits/stdc++.h>
using namespace std;

int main() {
    int ver,edges; cin>>ver>>edges;
    vector<int> adj[ver+1];
    for(int i=1;i<=edges;i++)
    {
        int a,b; cin>>a>>b;
        // If This is a directed Graph
        adj[a].push_back(b);
        adj[b].push_back(a);// This will not needed:
    }
    for(auto &it:adj)
    {
        for(auto &poi : it)
        {
            cout<<poi<<" ";
        }
        cout<<endl;
    }
}
