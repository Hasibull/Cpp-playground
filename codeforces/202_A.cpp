#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[200];

    memset(arr,0,sizeof(arr));
    string ch;

    getline(cin,ch);

    for(int i=0; i!=ch.size(); i++){
        arr[ch[i]]++;
    }

    for(int i=199; i>=0; i--){
        if(arr[i]>0){
            for(int j=0; j<arr[i]; j++){
                printf("%c",i);
            }
            break;
        }
    }
    cout<<endl;
    return 0;
}
