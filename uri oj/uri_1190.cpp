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
    int cnt=0;

    for(int i=1; i<11; i++){
        if(i<=5){
            for(int j=11; j>=12-i; j--){
                sum+=arr[i][j];
            }
        }
        else{
            for(int j=7+cnt; j<12; j++){
                sum+=arr[i][j];
            }
            cnt++;
        }
    }

    if(ch=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<sum/30.0<<endl;
    }

    return 0;
}