#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;

    cin>>ch;
    cin.ignore();

    double arr[13][13];

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>arr[i][j];
        }
    }

    double sum=0.0;
    int cnt=1;

    for(int i=7; i<12; i++){
        for(int j=5-(cnt-1); j<=5+cnt; j++){
            sum+=arr[i][j];
        }
        cnt++;
    }

    if(ch=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<sum/30.0<<endl;
    }

    return 0;
}