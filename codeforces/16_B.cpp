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
    long int n,m,ans=0,ck=0,a=0,b=0,arr[25],brr[25];

    vector<pair<int,int> >piv;

    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>a>>b;
        piv.push_back(make_pair(a,b));
    }
    sort(piv.begin(),piv.end(),sortbysec);
    int j=m-1;
    for(int i=0; i<m; i++){
        arr[i]=piv[m-i-1].first;
        brr[i]=piv[m-i-1].second;
    }

    for(int i=0; i<m; i++){
        if(arr[i]<=n){
            ans+=(arr[i]*brr[i]);
            n-=arr[i];
        }
        else{
            ans+=(n*brr[i]);
            n=0;
        }
    }
    cout<<ans<<endl;

    return 0;
}
