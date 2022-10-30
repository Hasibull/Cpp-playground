#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    long long n,m,ck=0,mid=0,sum=0,ct=0;

    cin>>n;

    while(n--){
        mid=0;ck=0;ct=0;
        cin>>m;
        ck=m;
        while(1){
            while(ck!=0){
                mid=(mid*10)+(ck%10);
                ck/=10;
            }

            if(mid==m)
                break;

            sum=mid+m;
            m=sum;
            ck=sum;
            ct++;
            mid=0;
        }
        cout<<ct<<" "<<m<<endl;

    }
    return 0;
}
