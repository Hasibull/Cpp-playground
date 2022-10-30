#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main()
{
    int i,j,l;
    char ch[105];

    scanf("%s",ch);
    l=strlen(ch);
    int ck[5];
    memset(ck,0,sizeof(ck));
    for(i=0; i<l; i++){
        if(ch[i]=='h'){
            ck[0]++;
        }
        else if(ch[i]=='e'){
            ck[1]++;
        }
        else if(ch[i]=='l'){
            ck[2]++;
        }
        else if(ch[i]=='o'){
            ck[3]++;
        }
    }
    if(((ck[0]>1 && ck[1]>1) || (ck[2]>2 && ck[0]>1) || (ck[3]>1 && ck[0]>1) || (ck[1]>1 && ck[2]>2) && (ck[1]>1 && ck[3]>1) || (ck[2]>2 && ck[3]>1)) && (ck[0]>=1 && ck[1]>=1 && ck[2]>=2 && ck[3]>=1)){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

    return 0;
}
