#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4],len=0,cal=0;
    string ch;

    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

    cin>>ch;

    len=ch.size();

    for(int i=0; i<len; i++){
        if(ch[i]=='1'){
            cal+=arr[0];
        }
        else if(ch[i]=='2'){
            cal+=arr[1];
        }
        else if(ch[i]=='3'){
            cal+=arr[2];
        }
        else{
            cal+=arr[3];
        }
    }
    cout<<cal<<endl;

    return 0;
}
