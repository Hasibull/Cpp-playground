#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[1005];
    int cnt[300],len,ck=0;

    gets(ch);

    len=strlen(ch);

    memset(cnt,0,sizeof(cnt));

    for(int i=0; i<len; i++){
        if(ch[i]>='a' && ch[i]<='z'){
            cnt[ch[i]]++;
        }
    }

    for(int i=0; i<300; i++){
        if(cnt[i]>0){
            ck++;
        }
    }

    cout<<ck<<endl;

    return 0;
}
