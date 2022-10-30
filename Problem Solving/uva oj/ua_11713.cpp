#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,i,j,l,l1,ck=0;
    char ch[30],ch1[30];

    cin>>t;
    getchar();

    while(t--){
            l=0;l1=0;ck=0;
        gets(ch);
        gets(ch1);

        l=strlen(ch);
        l1=strlen(ch1);

        if(l==l1){
            for(i=0; i<l; i++){
                if(ch[i]==ch1[i]){
                    ck=1;
                }
                else if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') && (ch1[i]=='a' || ch1[i]=='e' || ch1[i]=='i' || ch1[i]=='o' || ch1[i]=='u')){
                    ck=1;
                }
                else{
                    ck=0;
                    break;
                }
            }
            if(ck==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
