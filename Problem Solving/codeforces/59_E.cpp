#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;

    cin>>n>>m>>k;

    vector<int>graph[n+1];
    vector<bool>used(n+1);
    vector<int>p(n+1);

    for(int i=0; i<m; i++){
        int a,b;

        cin>>a>>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0; i<k; i++){
        int a,b,c;

        cin>>a>>b>>c;
    }

    queue<int>q;

    q.push(1);
    used[1]=true;
    p[1]=-1;

    while(!q.empty()){
        int v=q.front();
        q.pop();

        for(int u: graph[v]){
            if(!used[u]){
                used[u]=true;
                q.push(u);
                p[u]=v;
            }
        }
    }

    if(!used[n]){
        cout<<"-1"<<endl;
    }
    else{
        vector<int>path;

        for(int u=n; u!=-1; u=p[u]){
            path.push_back(u);
        }

        reverse(path.begin(),path.end());

        cout<<path.size()<<endl;

        for(int u: path){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    return 0;
}
