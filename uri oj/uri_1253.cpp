#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,t;
    char ch[55];

    cin>>t;
    while(t--){
        l=0;
        cin>>ch>>k;
        l=strlen(ch);
        for(i=0; i<l; i++){
            if(ch[i]-k<'A'){
                printf("%c",90-k+ch[i]-64);
            }
            else
                printf("%c",ch[i]-k);
        }
        cout<<endl;
    }
    return 0;
}
