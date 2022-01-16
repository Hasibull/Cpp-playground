#include<bits/stdc++.h>

using namespace std;

bool check[1001][1001];
vector<string>graph;
int l[4]={-1,1,0,0};
int r[4]={0,0,1,-1};

void bfs(int val1, int val2){
    queue<pair<int,int> >qt;
    qt.push(make_pair(val1,val2));
    check[val1][val2]=true;

    while(!qt.empty()){
        pair<int,int>dum=qt.front();
        qt.pop();

        for(int i=0; i<4; i++){
            if(dum.first+l[i]<graph.size() && dum.second+r[i]<graph[0].size()){
                int one=dum.first+l[i];
                int two=dum.second+r[i];

                if(graph[one][two]=='.' && check[one][two]==false){
                    check[one][two]=true;
                    qt.push(make_pair(one,two));
                }
            }
        }
    }
}

int main()
{
    int n,m;

    cin>>n>>m;
    cin.ignore();

    for(int i=0; i<n; i++){
        string ch;
        getline(cin,ch);
        graph.push_back(ch);
    }

    int cnt=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(graph[i][j]=='.' && check[i][j]==false){
                bfs(i,j);
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}