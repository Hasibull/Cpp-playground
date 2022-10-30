#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> vect ;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            pair<int,int> p = make_pair(x,y);
            vect.push_back(p);
        }
        sort(vect.begin(),vect.end());

        pair<int,int> prev = make_pair(0,0);
        bool test=false;

        string s;

        for(auto &x:vect){
            int l = x.first-prev.first;
            while(l--){
                s+='R';
            }
            int k= x.second - prev.second;
            if(k<0){
                test=true;
                break;
            }else{
                while(k--){
                    s+='U';
                }
            }
            prev=make_pair(x.first,x.second);
        }
        if(test){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
    return 0;
}
