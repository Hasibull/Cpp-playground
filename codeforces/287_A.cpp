#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[5][5];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>ch[i][j];
        }
    }
    int ckd=0,ckh=0;
    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            for(int j=k; j<k+2; j++){
                if(ch[i][j]=='#'){
                    ckh++;
                }
                if(ch[i][j]=='.'){
                    ckd++;
                }
                if(ch[i+1][j]=='#'){
                    ckh++;
                }
                if(ch[i+1][j]=='.'){
                    ckd++;
                }
            }
            ///cout<<ckd<<" "<<ckh<<endl;
            if(ckd!=ckh){
                cout<<"YES"<<endl;
                return 0;

            }
            ckd=0;ckh=0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
