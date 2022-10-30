#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<pair<int,int> >vect;
    int s,n,a,b;

    cin>>s>>n;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }

    int ck=0;
    sort(vect.begin(),vect.end());

    for(int i=0; i<n; i++){
        if(vect[i].first<s){
            ck=1;
            s+=vect[i].second;
        }
        else{
            ck=0;
            break;
        }
    }


    if(ck==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
