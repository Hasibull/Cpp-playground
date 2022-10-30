#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    /**
    vector<int>sq;
    vector<int>qb;
    vector<int>pd;

    st.insert(1);
    ///sq.push_back(1);

    for(int i=2; i<31622; i++){
        if(i<1001){
            st.insert(pow(i,3));
            ///qb.push_back(pow(i,3));
        }
        st.insert(pow(i,2));
        ///sq.push_back(pow(i,2));
    }

    for(auto it=st.begin(); it!=st.end(); it++){
        pd.push_back(*it);
    }
    cout<<pd[32593]<<endl;
    cout<<st.size()<<endl;
    */
    while(tc--){
        int n,ans=0;

        cin>>n;

        /**
        int b=0,e=sq.size()-1,m=(b+e)/2;

        while(b<e){
            if(n<sq[m]){
                e=m-1;
            }
            else if(n>sq[m]){
                b=m+1;
            }
            else if(n==sq[m]){
                break;
            }
            m=(b+e)/2;
        }
        cout<<sq[m-1]<<endl;
        if(sq[m]>n){
            ans+=m;
        }
        else{
            ans+=(m+1);
        }

        for(int i=0; i<=m; i++){
            cout<<sq[i]<<" ";
        }
        cout<<endl;

        b=0,e=qb.size()-1,m=(b+e)/2;
        while(b<e){
            if(n<qb[m]){
                e=m-1;
            }
            else if(n>qb[m]){
                b=m+1;
            }
            else if(n==qb[m]){
                break;
            }
            m=(b+e)/2;
        }
        ///cout<<qb[m-1]<<endl;
        if(qb[m]>n){
            ans+=m;
        }
        else{
            ans+=(m+1);
        }

        for(int i=0; i<=m; i++){
            cout<<qb[i]<<" ";
        }
        cout<<endl;

        cout<<ans<<endl;
        */
        /*
        for(int i=0; i<pd.size(); i++){
            if(n<pd[i]){
                cout<<pd[i]<<endl;
                cout<<i<<endl;
                break;
            }
        }
        */
        set<int>st;

        for(int i=1; i*i<=n; i++){
            st.insert(i*i);
        }
        for(int i=1; i*i*i<=n; i++){
            st.insert(i*i*i);
        }

        cout<<st.size()<<endl;
    }

    return 0;
}
