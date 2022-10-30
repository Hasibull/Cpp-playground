#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,arr[100],ck=1;
    char ch[100],ch1[100];

    while(scanf("%[^\n]",ch)!=EOF){
        getchar();
        l=0;
        l=strlen(ch);
        k=0;

        ch1[k]='\0';
        j=0;
        for(i=0; i<l; i++){
            if(ch1[i]=='B' || ch1[i]=='F' || ch1[i]=='P' || ch1[i]=='V'){
                arr[j]=1;
                j++;
            }
            else if(ch1[i]=='C' || ch1[i]=='G' || ch1[i]=='J' || ch1[i]=='K' || ch1[i]=='Q' || ch1[i]=='S' || ch1[i]=='X' || ch1[i]=='Z'){
                arr[j]=2;
                j++;
            }
            else if(ch1[i]=='D' || ch1[i]=='T'){
                arr[j]=3;
                j++;
            }
            else if(ch1[i]=='L'){
                arr[j]=4;
                j++;
            }
            else if(ch1[i]=='M' || ch1[i]=='N'){
                arr[j]=5;
                j++;
            }
            else if(ch1[i]=='R'){
                arr[j]=6;
                j++;
            }
        }

        for(i=0; i<j; i++){
            cout<<arr[i];
        }
        cout<<endl;
    }

    return 0;
}
