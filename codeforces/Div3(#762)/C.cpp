#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        long long a,s;

        cin>>a>>s;

        /**
        vector<int>b;
        int check=0;

        while(s){
            int x=a%10,y=s%10;

            if(y>=x){
                b.push_back(y-x);
            }
            else{
                s/=10;
                y=y+((s%10)*10);
                if(x<y && y>=10 && y<=18){
                    b.push_back(y-x);
                }
                else{
                    check=-1;
                    break;
                }
            }
            s/=10;
            a/=10;
        }

        if(a){
            check=-1;
        }

        if(check==-1){
            cout<<check<<endl;
        }
        else{
            while(b.back()==0){
                b.pop_back();
            }

            for(int i=b.size()-1; i>=0; i--){
                cout<<b[i];
            }
            cout<<endl;
        }
        */

        string ans="";

        while(s){
            int dum1=s%10,dum2=a%10;

            if(dum1<dum2){
                s/=10;
                dum1=(dum1)+((s%10)*10);
                if(dum1<dum2 || dum1<10 || dum1>18){
                    ans="1-";
                    break;
                }

            }

            if((dum1-dum2)==0){
                ans+="0";
            }
            else if((dum1-dum2)==1){
                ans+="1";
            }
            else if((dum1-dum2)==2){
                ans+="2";
            }
            else if((dum1-dum2)==3){
                ans+="3";
            }
            else if((dum1-dum2)==4){
                ans+="4";
            }
            else if((dum1-dum2)==5){
                ans+="5";
            }
            else if((dum1-dum2)==6){
                ans+="6";
            }
            else if((dum1-dum2)==7){
                ans+="7";
            }
            else if((dum1-dum2)==8){
                ans+="8";
            }
            else if((dum1-dum2)==9){
                ans+="9";
            }

            s/=10;
            a/=10;
        }
        /**
        if(s>0 && a==0){
            while(s!=0){
                if(s%10==0){
                    ans+="0";
                }
                else if(s%10==1){
                    ans+="1";
                }
                else if(s%10==2){
                    ans+="2";
                }
                else if(s%10==3){
                    ans+="3";
                }
                else if(s%10==4){
                    ans+="4";
                }
                else if(s%10==5){
                    ans+="5";
                }
                else if(s%10==6){
                    ans+="6";
                }
                else if(s%10==7){
                    ans+="7";
                }
                else if(s%10==8){
                    ans+="8";
                }
                else if(s%10==9){
                    ans+="9";
                }
                s/=10;
            }
        }*/

        if(a>0){
            ans="1-";
        }

        int ck=0;
        string fans="";

        for(int i=ans.size()-1; i>=0; i--){
            if(ans[i]=='0' && ck==0){
                continue;
            }
            else {
                ck=1;
                fans+=ans[i];
            }

        }
        cout<<fans<<endl;
    }
    return 0;
}
