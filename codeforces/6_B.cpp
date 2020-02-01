#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,dpt=0,ck=0;
    char ch,str[105][105];
    set<char>st;

    cin>>n>>m;
    cin.ignore();
    cin>>ch;
    cin.ignore();

    for(int i=0; i<n; i++){
        cin>>str[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(str[i][j]==ch){
                if(str[i][j-1]!=ch && str[i][j-1]!='.' && i<n && j-1>=0){
                    st.insert(str[i][j-1]);
                }
                if(str[i-1][j]!=ch && str[i-1][j]!='.' && i-1>=0 && j<m){
                    st.insert(str[i-1][j]);
                }
                if(str[i][j+1]!=ch && str[i][j+1]!='.' && i<n && j+1<m){
                    st.insert(str[i][j+1]);
                }
                if(str[i+1][j]!=ch && str[i+1][j]!='.' && i+1<n && j<m){
                    st.insert(str[i+1][j]);
                }
            }
        }
    }
    cout<<st.size()<<endl;
    return 0;
}
