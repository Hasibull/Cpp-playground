#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int a[n+1],b[n+1];
        int sum=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
            sum+=abs(a[i]-b[i]);
        }

        if(sum & 1){
            cout<<"-1"<<endl;
        }
        else {
            vector<int>reduceable;
            vector<int>increaseable;

            for(int i=0; i<n; i++){
                if(a[i]>b[i]){
                    for(int j=0; j<(a[i]-b[i]); j++){
                        reduceable.push_back(i+1);
                    }
                }
                else if(b[i]>a[i]){
                    for(int j=0; j<(b[i]-a[i]); j++){
                        increaseable.push_back(i+1);
                    }
                }
            }

            if(reduceable.size()!=increaseable.size()){
                cout<<"-1"<<endl;
            }
            else {
                cout<<reduceable.size()<<endl;
                for(int i=0; i<reduceable.size(); i++){
                    cout<<reduceable[i]<<" "<<increaseable[i]<<endl;
                }
            }

            reduceable.clear();
            increaseable.clear();
        }
    }

    return 0;
}
