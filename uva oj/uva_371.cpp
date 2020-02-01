#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long i,j,k,a,b;

    while(1){
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        k=0;j=0;
        long long ck[100005]={0};
        for(i=a; i<=b; i++){
            k=i;
            while(k!=1){
                if(k%2==0){
                    k=k/2;
                }
                else{
                    k=(3*k)+1;
                }
                ck[i]++;
            }
        }
        long long m=0;
        for(i=a; i<=b; i++){
            if(m<ck[i]){
                m=ck[i];
                j=i;
            }
        }
        cout<<"Between "<<a<<" and "<<b<<", "<<j<<" generates the longest sequence of "<<m<<" values."<<endl;
    }
    return 0;
}
