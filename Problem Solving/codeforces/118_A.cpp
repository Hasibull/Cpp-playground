#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch,ch1=".";

    getline(cin,ch);

    int sz=ch.size();
    int i=0;
    while(i!=sz){
        if(ch[i]=='A' || ch[i]=='Y' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'){
            ch.erase(ch.begin()+i);
            sz--;
        }
        else if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='y'){
            ch.erase(ch.begin()+i);
            sz--;
        }
        else{
            i++;
        }
    }
    for(int i=0; i!=ch.size(); i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]+' ';
        }
    }
    for(int i=0; i!=ch.size(); i++){
        cout<<"."<<ch[i];
    }
    cout<<endl;
    return 0;
}
