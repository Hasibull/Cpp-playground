#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5],a=0,b=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];

            if(arr[i][j]==1){
                a=i;b=j;
            }
        }
    }
    cout<<abs(2-a)+abs(2-b)<<endl;

    return 0;
}
