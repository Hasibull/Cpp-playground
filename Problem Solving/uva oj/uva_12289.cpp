#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,l,n;
    char ch[11];

    cin>>n;
    getchar();

    while(n--){
        cin>>ch;
        l=0;
        l=strlen(ch);

        if(l==3){
            if((ch[0]=='o') && (ch[1]=='n') && (ch[2]=='e')){
                cout<<"1"<<endl;
            }
            if((ch[0]!='o') && (ch[1]=='n') && (ch[2]=='e')){
                cout<<"1"<<endl;
            }
            if((ch[0]=='o') && (ch[1]!='n') && (ch[2]=='e')){
                cout<<"1"<<endl;
            }
            if((ch[0]=='o') && (ch[1]=='n') && (ch[2]!='e')){
                cout<<"1"<<endl;
            }
            if((ch[0]=='t') && (ch[1]=='w') && (ch[2]=='o')){
                cout<<"2"<<endl;
            }
            if((ch[0]!='t') && (ch[1]=='w') && (ch[2]=='o')){
                cout<<"2"<<endl;
            }
            if((ch[0]=='t') && (ch[1]!='w') && (ch[2]=='o')){
                cout<<"2"<<endl;
            }
            if((ch[0]=='t') && (ch[1]=='w') && (ch[2]!='o')){
                cout<<"2"<<endl;
            }
        }
        else if(l==5){
            if((ch[0]=='t') && (ch[1]=='h') && (ch[2]=='r') && (ch[3]=='e') && (ch[4]=='e')){
                cout<<"3"<<endl;
            }
            else if((ch[0]!='t') && (ch[1]=='h') && (ch[2]=='r') && (ch[3]=='e') && (ch[4]=='e')){
                cout<<"3"<<endl;
            }
            else if((ch[0]=='t') && (ch[1]!='h') && (ch[2]=='r') && (ch[3]=='e') && (ch[4]=='e')){
                cout<<"3"<<endl;
            }
            else if((ch[0]=='t') && (ch[1]=='h') && (ch[2]!='r') && (ch[3]=='e') && (ch[4]=='e')){
                cout<<"3"<<endl;
            }
            else if((ch[0]=='t') && (ch[1]=='h') && (ch[2]=='r') && (ch[3]!='e') && (ch[4]=='e')){
                cout<<"3"<<endl;
            }
            else if((ch[0]=='t') && (ch[1]=='h') && (ch[2]=='r') && (ch[3]=='e') && (ch[4]!='e')){
                cout<<"3"<<endl;
            }
        }
    }
    return 0;
}
