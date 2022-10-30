    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t,i,n,ck,ans,x,y;
        char temp1;
        cin>>t;
        while(t--){
            cin>>n;
            char str1[n+2],str2[n+2];
            cin>>str1;
            cin>>str2;
            x=-1,y=-1;
            ck=0;
            for(i=0;i<n;i++){
                if((str1[i]!=str2[i])&&ck==0){
                   x = i;
                   ck++;
                }
                else  if((str1[i]!=str2[i])&&ck==1){
                   y = i;
                   ck++;
                }
                else  if(str1[i]!=str2[i]){
                   ck++;
                   break;
                }
            }
            if(ck!=2){
                cout<<"No"<<endl;
            }
            else{
                temp1 = str1[x];
                str1[x] = str2[y];
                str2[y] = temp1;
                if(strcmp(str1,str2)==0){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }



        }
        return 0;
    }
