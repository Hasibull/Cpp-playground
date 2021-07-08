#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,cs=1;

    cin>>tc;

    while(tc--){
        int n,e;

        cin>>n>>e;

        char graph[e+2][n+2];
        pair<int,int>begin;

        for(int i=0; i<e; i++){
            for(int j=0; j<n; j++){
                cin>>graph[i][j];

                if(graph[i][j]=='@'){
                    begin = make_pair(i,j);
                }
            }
        }

        bool used[21][21];
        memset(used,false,sizeof(used));
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        int cnt=1;

        queue<pair<int,int> >q;

        q.push(begin);
        used[begin.first][begin.second]=true;

        while(!q.empty()){
            pair<int,int>v;

            v=q.front();
            q.pop();

            for(int i=0; i<4; i++){
                pair<int,int>u;
                u=make_pair(v.first+dx[i],v.second+dy[i]);

                if(u.first<0 || u.first>=e || u.second<0 || u.second>=n)
                    continue;
                else if(graph[u.first][u.second]=='#'){
                    continue;
                }
                else if(used[u.first][u.second])
                    continue;

                q.push(u);
                used[u.first][u.second]=true;
                cnt++;
            }
        }
        cout<<"Case "<<cs++<<": "<<cnt<<endl;
    }
    return 0;
}
