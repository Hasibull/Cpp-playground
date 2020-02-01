#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,ck;
    vector<int>v;
    vector<int>v2;

    cin>>t;
    while(t--){
        int cnt=0,hp=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ck;

            v.push_back(ck);
        }
        for(int i=0; i<n; i++){
            if(v[i]==2048){
                cnt=1;
                break;
            }
        }
        if(cnt==1){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                int fk=0;
                for(j=i+1; j<n; j++){
                    if(v[i]==v[j]){
                        hp=v[i]+v[j];
                        if(hp==2048){
                            cnt=1;
                            break;
                        }
                        else{
                            v2.push_back(hp);
                            fk=1;
                        }
                    }
                }
                if(fk==0)
                    v2.push_back(v[i]);

                if(cnt==1)
                    break;
            }
            if(cnt==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
