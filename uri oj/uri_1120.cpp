#include<bits/stdc++.h>

using namespace std;

int main()
{
    char skiped;
    string mainString;

    while(cin>>skiped>>mainString){
        if(skiped=='0' && mainString=="0"){
            break;
        }
        string ans="";

        for(int i=0; i<mainString.size(); i++){
            if(mainString[i]!=skiped){
                ans+=mainString[i];
            }
        }

        if(ans.empty()){
            cout<<"0"<<endl;
        }
        else{
            int ps;
            for(ps=0; ps<ans.size(); ps++){
                if(ans[ps]!='0'){
                    break;
                }
            }
            string mainAns=ans.substr(ps, ans.size());
            if(mainAns.empty()){
                cout<<"0"<<endl;
            }
            else{
                cout<<mainAns<<endl;
            }
        }
    }
    return 0;
}