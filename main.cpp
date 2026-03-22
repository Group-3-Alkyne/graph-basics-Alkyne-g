#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1005];
int a[1005][1005];
int main(){
    if(fopen("vao.inp","r")){
        freopen("vao.inp","r",stdin);
        freopen("ra.out","w",stdout);
    }
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        a[u][v]=1;
        a[v][u]=1;
    }

    // in danh sách kề
    for(int i=1;i<=n;i++){
        sort(adj[i].begin(),adj[i].end());
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j];
            if(j+1<adj[i].size()) cout<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";

    // in ma trận kề
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j];
            if(j<n) cout<<" ";
        }
        cout<<"\n";
    }
}
