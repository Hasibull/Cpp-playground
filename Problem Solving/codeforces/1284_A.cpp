#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<string>str1,str2;

    int n,m,q;

    cin>>n>>m;

    cin.ignore();

    string ch;

    for(int i=1; i<=n; i++){
        cin>>ch;

        str1.push_back(ch);
    }
    for(int i=1; i<=m; i++){
        cin>>ch;

        str2.push_back(ch);
    }

    cin>>q;
    int val=0;

    while(q--){
        cin>>val;

        string ans;

        if(val<=n){
            ans+=str1[val-1];
        }
        else{
            int ps=0;
            ps=val%n;
            if(ps==0){
                ans+=str1[n-1];
            }
            else
                ans+=str1[ps-1];
        }
        if(val<=m){
            ans+=str2[val-1];
        }
        else{
            int ps=0;
            ps=val%m;
            if(ps==0){
                ans+=str2[m-1];
            }
            else
                ans+=str2[ps-1];
        }
        cout<<ans<<endl;
        ans.clear();
    }

    return 0;
}
