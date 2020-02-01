#include<bits/stdc++.h>

using namespace std;
int main()
{
    int l,n,i,j,k,ck=1;

    cin>>l>>n;
    getchar();

    char ch[l][3][100],ch1[25],ch2[25];

    for(i=0; i<l; i++){
        for(j=0; j<2; j++){
            scanf("%s",ch[i][j]);
            getchar();
        }
        getchar();
    }
    getchar();

    for(i=0; i<n; i++){
        gets(ch1);
        for(j=0; j<l; j++){
            ///ch2=ch1;
            if(strcmp(ch1,ch[j][0])){
                ck=1;
                cout<<ch[j];
                break;
            }
            else{
                ck=0;
            }
        }
    }
}
