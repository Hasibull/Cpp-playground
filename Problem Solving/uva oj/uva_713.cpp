#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;
int main()
{
    int i,j,k,l,l1,n,ck,carry=0;
    char ch[205],ch1[205],sum[205],sum1[205],rev[205],rev1[205];

    cin>>n;
    getchar();

    while(n--){
        scanf("%s",ch);
        getchar();
        scanf("%s",ch1);

        l=0;l1=0;i=0;j=0;

        l=strlen(ch);
        l1=strlen(ch1);

        for(i=l-1; i>=0; i--){
            rev[j]=ch[i];
            j++;
        }
        rev[j]='\0';

        j=0;
        for(i=l1-1; i>=0; i--){
            rev1[j]=ch1[i];
            j++;
        }
        rev1[j]='\0';

        j=l1;k=0;ck=0;
        if(l>=l1){
            for(i=l-1; i>=0; i--){
                ck=0;carry=0;
                if(j>=0){
                    ck=(rev[i]-'0')+(rev1[j]-'0');
                    if((ck+carry)>=10){
                        ck-=10;
                        carry=1;
                    }
                    else{
                        carry=0;
                    }
                    sum[k]=ck+'0';
                    k++;
                    j--;
                }
                else{
                    sum[k]=rev[i];
                    k++;
                }
            }
            sum[k]='\0';
        }
        j=l;k=0;ck=0;
        if(l<l1){
            for(i=l1-1; i>=0; i--){
                ck=0;carry=0;
                if(j>=0){
                    ck=(rev1[i]-'0')+(rev[j]-'0');
                    if((ck+carry)>=10){
                        ck-=10;
                        carry=1;
                    }
                    else{
                        carry=0;
                    }
                    sum[k]=ck+'0';
                    k++;
                    j--;
                }
                else{
                    sum[k]=rev[i];
                    k++;
                }
            }
            sum[k]='\0';
        }

        cout<<sum<<endl;
    }
    return 0;
}
