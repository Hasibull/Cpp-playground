#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[501];

    for(int i=0; i<=500; i++){
        arr[i]=(i*(i+1))/2;
    }

    cin>>n;

    for(int i=0; i<=500; i++){
        if(n==arr[i]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
