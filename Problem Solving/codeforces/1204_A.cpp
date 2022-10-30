#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll num=0,sum,left=0;
    string ch;

    getline(cin,ch);

    ll l=ch.size();
    ll j=0;
    for(ll i=l-1; i>=0; i--){
        num+=(((ch[i]-48)*(pow(2,j))));
        num=num%100000000;
        j++;
    }

    sum=0;j=0;

    while(sum<num){
        sum=pow(4,j);
        j++;
        if(sum<num)
            left++;
    }
    cout<<left<<endl;

    return 0;
}
