#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    int n;

    cin>>n;
    cin.ignore();

    for(int i=1; i<=n; i++){
        cin>>ch;

        int l=ch.size();

        if(ch[l-1]=='o' && ch[l-2]=='p'){
            cout<<"FILIPINO"<<endl;
        }
        else if(ch[l-1]=='u' && ch[l-2]=='s' && ch[l-3]=='e' && ch[l-4]=='d'){
            cout<<"JAPANESE"<<endl;
        }
        else if(ch[l-1]=='u' && ch[l-2]=='s' && ch[l-3]=='a' && ch[l-4]=='m'){
            cout<<"JAPANESE"<<endl;
        }
        else if(ch[l-1]=='a' && ch[l-2]=='d' && ch[l-3]=='i' && ch[l-4]=='n' && ch[l-5]=='m'){
            cout<<"KOREAN"<<endl;
        }
    }

    return 0;
}
