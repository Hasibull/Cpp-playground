#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin>>n;

    long long sum = (n*(n+1))/2;

    cout<<sum<<endl;

    if(sum%2==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        long long dum = sum/2, m = n;
        map<long long, long>hst;
        vector<long long>first;
        vector<long>second;

        while(dum>=m){
            dum -= m;

            if(dum<m && dum!=0){
                hst[m]=1;
                hst[dum]=1;
                first.push_back(m);
                first.push_back(dum);
            }
            else{
                first.push_back(m);
                hst[m]=1;
            }
            m--;
        }

        for(int i=1; i<=n; i++){
            if(hst[i]!=1){
                second.push_back(i);
            }
        }

        cout<<first.size()<<endl;
        for(int i=0; i<first.size(); i++){
            cout<<first[i]<<" ";
        }
        cout<<endl;
        cout<<second.size()<<endl;
        for(int i=0; i<second.size(); i++){
            cout<<second[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
