#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    vector<string>ch;

    cin>>tc;

    int ct=0;

    while(tc--){
        string var="",var1="";
        cin>>var>>var1;

        int ck=1;

        for(int i=0; i<ct; i++){
            if(var==ch[i]){
                ch.erase(ch.begin()+i-1);
                ch.push_back(var1);
                ck=0;
                cout<<var<<"--"<<endl;
                break;
            }
        }
        if(ck==1){
            ch.push_back(var1);
            ct++;
        }
    }
    for(auto it: ch){
        cout<<it<<endl;
    }
    return 0;
}
