#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch,ch1;

    getline(cin,ch);
    getline(cin,ch1);

    reverse(ch1.begin(),ch1.end());

    ///cout<<ch1<<endl;
    if(ch==ch1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
