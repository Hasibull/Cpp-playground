#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    int ck=0,l=0,r=0;

    cin>>ch;

    l=abs('z'-ch[0])+1;
    r=abs(ch[0]-'a');

    if(l>26){
        l-=26;
    }
    if(r>26){
        r-=26;
    }

    if(l>r){
        ck+=r;
    }
    else{
        ck+=l;
    }
    cout<<l<<" "<<r<<endl;
    for(int i=1; i<ch.size(); i++){
        l=abs('z'-ch[i])+(ch[i-1]-'a')+1;
        r=abs(ch[i]-'a')+('z'-ch[i-1]);

        if(l>26){
            l-=26;
        }
        if(r>26){
            r-=26;
        }
        if(l>r){
            ck+=r;;
        }
        else{
            ck+=l;
        }
        cout<<l<<" "<<r<<endl;
    }
    cout<<ck<<endl;

    return 0;
}
