#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    int i,j,k,l1,l2;
    char ch[10005],ch1[10005];

    cin>>ch>>ch1;
    l1=strlen(ch);
    l2=strlen(ch1);
    if(l1!=l2){
        cout<<"No\n";
    }
    else{
        int ck=0;
        for(i=0; i<l1; i++){
            if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') && (ch1[i]=='a' || ch1[i]=='e' || ch1[i]=='i' || ch1[i]=='o' || ch1[i]=='u')){
                ck=1;
            }
            else if((ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u') && (ch1[i]!='a' && ch1[i]!='e' && ch1[i]!='i' && ch1[i]!='o' && ch1[i]!='u')){
                ck=1;
            }
            else{
                ck=0;
                break;
            }
        }
        if(ck==1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
