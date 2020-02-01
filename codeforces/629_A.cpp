#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;
    cin.ignore();

    char ch[n+1][n+1];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>ch[i][j];
        }
    }

    int r[101],c[101];
    int ckr=0,ckc=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ch[i][j]=='C'){
                ckr++;
            }
            if(ch[j][i]=='C'){
                ckc++;
            }
        }
        r[i]=ckr;c[i]=ckc;
        ckr=0;ckc=0;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=((r[i]/2)+(c[i]/2));
    }
    cout<<ans<<endl;

    return 0;
}
