#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;
    cin.ignore();

    char ch[n+1];
    int ctr=0,ps=0,ck=0,ck1=0,ctl=0,psl=0;

    for(int i=0; i<n; i++){
        cin>>ch[i];
        if(ch[i]=='R' && ck==0){
            ps=i+1;
            ctr++;
            ck=1;
        }
        else if(ch[i]=='R' && ck==1){
            ctr++;
        }
        if(ch[i]=='L' && ck1==0){
            ctl++;
            psl=i;
            ck1=1;
        }
        else if(ch[i]=='L' && ck1==1){
            ctl++;
        }
    }
    if(ctr!=0 && ctl==0)
        cout<<ps<<" "<<(ps-1+ctr)+1<<endl;
    else if(ctr!=0 && ctl!=0){
        cout<<ps<<" "<<(ps-1+ctr)<<endl;
    }
    else if(ctl!=0 && ctr==0){
        cout<<(psl+ctl)<<" "<<psl<<endl;
    }
    else
        cout<<ctl<<" "<<ctl<<endl;

    return 0;
}
