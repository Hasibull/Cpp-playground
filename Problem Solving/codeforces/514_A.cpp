#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;

    getline(cin,ch);

    for(int i=0; i!=ch.size(); i++){
        if((ch[i]-48)>=5 && i!=0){
            cout<<(9-(ch[i]-48));
        }
        else if((ch[i]-48)==9 && i==0){
            cout<<ch[i];
        }
        else if((ch[i]-48)>=5 && (ch[i]-48)<9 && i==0){
            cout<<(9-(ch[i]-48));
        }
        else{
            cout<<ch[i];
        }
    }
    cout<<endl;

    return 0;
}
