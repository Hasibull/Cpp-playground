#include<bits/stdc++.h>

using namespace std;

/// Driver function to sort the vector elements
/// by second element of pairs
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n,f,ans=0,a,b;
    vector<pair<int,int> >vp;

    cin>>n>>f;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        vp.push_back( make_pair(a,b));
    }
    sort(vp.begin(),vp.end(),sortbysec);

    int i=0;
    while(i<f){
        if(vp[n-i-1].first!=0){
            ans+=min(vp[n-i-1].second,2*vp[n-i-1].first);
            i++;
        }
        else{
            i++;
            f++;
        }
    }
    for(int i=0; i<(n-f); i++){
        ans+=min(vp[i].first,vp[i].second);
    }

    cout<<ans<<endl;

    return 0;
}
