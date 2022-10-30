#include<bits/stdc++.h>
///#include<cstring>

using namespace std;
int main()
{
    char ch[50005];
    int a,b,q,i,j,k,l,arr[50005][10],arr1[10][40005];
    ///char ch[60000][50000];

    cin>>q;
    getchar();

    while(q--){
        cin>>a>>b;
        getchar();

        for(i=0; i<a; i++){
            for(j=0; j<b; j++){
                scanf("%c",ch[i]);
            }
            getchar();
        }
        for(i=0; i<a; i++){
            for(j=0; j<b; j++){
                printf("%c",ch[i]);
            }
            ///getchar();
            cout<<endl;
        }
    }
    return 0;
}
