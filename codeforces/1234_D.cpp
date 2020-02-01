#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch,ch1;
    int l,l1,l2,q,test,ps=0;

    vector<set<int> > pos(26);
    char c;

    cin>>ch;
    for(int i=0; i<int(ch.size()); i++){
        pos[ch[i]-'a'].insert(i);
    }

    cin>>q;

    while(q--){
        cin>>test;
        l=0;
        int ck=0;

        if(test==1){
            cin>>ps;
            getchar();
            cin>>c;
            ch[ps-1]=c;
        }
        if(test==2){
            cin>>l1>>l2;

            ch1=ch.substr((l1-1),(l2-l1+1));

            set<char>st_ch(begin(ch1),end(ch1));

            ck=st_ch.size();

            cout<<ck<<endl;
            st_ch.clear();
            ch1.clear();
            ck=0;
        }
    }

    return 0;
}
