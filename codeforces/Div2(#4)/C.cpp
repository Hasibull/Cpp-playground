#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int n;

    cin>>n;

    map<string,int>hst;

    for(int i=0; i<n; i++){
        string ch;

        cin>>ch;

        if(hst[ch]>0){
            int val = hst[ch];
            stringstream ss;
            ///string ps = to_string(val);

            ss<<val;
            string dum;
            ss>>dum;

            cout<<ch+dum<<endl;
            hst[ch]+=1;
        }
        else{
            cout<<"OK"<<endl;
            hst[ch]=1;
        }
    }

    return 0;
}
