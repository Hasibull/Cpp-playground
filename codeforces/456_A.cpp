#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    vector<pair<int,int> > vect;

    for(int i=0; i<tc; i++){
        int a,b;
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }

    sort(vect.begin(),vect.end());

    for(int i=1; i<tc; i++){
        if(vect[i].second<vect[i-1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }

    cout<<"Poor Alex"<<endl;

    return 0;
}
