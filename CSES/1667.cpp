#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,e;

    cin>>n>>e;

    vector<int>graph[n+1];
    vector<bool>used(n+1);
    vector<int>d(n+1),p(n+1);
    queue<int>q;

    for(int i=0; i<e; i++){
        int a,b;

        cin>>a>>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    q.push(1);
    used[1]=true;
    p[1]=-1;
    d[1]=0;

    while(!q.empty()){
        int v=q.front();
        q.pop();

        for(int u: graph[v]){
            if(!used[u]){
                used[u]=true;
                q.push(u);
                d[u]=d[v]+1;
                p[u]=v;
            }
        }
    }

    if(!used[n]){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        vector<int>path;

        for(int v=n; v!=-1; v=p[v]){
            path.push_back(v);
        }
        reverse(path.begin(),path.end());

        cout<<path.size()<<endl;

        for(int v: path){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}
