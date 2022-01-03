#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n,k;

        cin>>n>>k;

        vector<string>ans;

        if(n<((k*2)-1)){
            cout<<"-1"<<endl;
        }
        else {
            int ri=0,rj=0,cnt=0;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==ri && j==rj && cnt<k){
                        cout<<"R";
                        ri+=2;
                        rj+=2;
                        cnt++;
                    }
                    else {
                        cout<<".";
                    }
                }
                cout<<endl;
            }
        }
    }

    return 0;
}