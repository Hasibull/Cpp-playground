#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,n;

    cin>>n;
    char ch[n+1];
    for(i=0; i<n; i++){
        cin>>ch[i];
    } j=0;
    for(i=0; i<(n-1); i++){
        if(ch[i]==ch[i+1])
            j++;
    }
    cout<<j<<endl;
    return 0;
}
