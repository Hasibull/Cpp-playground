#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin>>n;

    long long sum = (n*(n+1))/2;

    if(sum%2==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        long long dum = sum/2, m = n;
        map<long long, int>used;
        vector<long long>first,second;
        
        while(1){
            if(dum-m>=0)
                dum-=m;
            else{
                break;
            }

            if(dum<m && dum>0){
                used[m]=1;
                used[dum]=1;
                first.push_back(m);
                first.push_back(dum);
                break;
            }
            else{
                first.push_back(m);
                used[m]=1;
            }
            m--;
        }

        for(int i=1; i<=n; i++){
            if(used[i]!=1){
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
