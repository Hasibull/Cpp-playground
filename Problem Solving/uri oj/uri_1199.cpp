#include<bits/stdc++.h>

using namespace std;

int main()
{
    string val;

    while(cin>>val && val[0]!='-'){

        if(val[0]=='0' && val[1]=='x'){
            long int result=0;
            int ps=0;
            for(int i=val.size()-1; i>1; i--){
                if(val[i]=='A' || val[i]=='a'){
                    result+=((10)*pow(16,ps));
                }
                else if(val[i]=='B' || val[i]=='b'){
                    result+=((11)*pow(16,ps));
                }
                else if(val[i]=='C' || val[i]=='c'){
                    result+=((12)*pow(16,ps));
                }
                else if(val[i]=='D' || val[i]=='d'){
                    result+=((13)*pow(16,ps));
                }
                else if(val[i]=='E' || val[i]=='e'){
                    result+=((14)*pow(16,ps));
                }
                else if(val[i]=='F' || val[i]=='f'){
                    result+=((15)*pow(16,ps));
                }
                else{
                    result+=((val[i]-'0')*pow(16,ps));
                }
                ps++;
            }
            cout<<result<<endl;
        }
        else{
            long int intVal=0;
            string ans="";

            for(int i=0; i<val.size(); i++){
                intVal=(intVal*10)+(val[i]-'0');
            }

            while(intVal>0){
                int value=intVal%16;

                if(value==10){
                    ans+="A";
                }
                else if(value==11){
                    ans+="B";
                }
                else if(value==12){
                    ans+="C";
                }
                else if(value==13){
                    ans+="D";
                }
                else if(value==14){
                    ans+="E";
                }
                else if(value==15){
                    ans+="F";
                }
                else if(value==0){
                    ans+="0";
                }
                else if(value==1){
                    ans+="1";
                }
                else if(value==2){
                    ans+="2";
                }
                else if(value==3){
                    ans+="3";
                }
                else if(value==4){
                    ans+="4";
                }
                else if(value==5){
                    ans+="5";
                }
                else if(value==6){
                    ans+="6";
                }
                else if(value==7){
                    ans+="7";
                }
                else if(value==8){
                    ans+="8";
                }
                else if(value==9){
                    ans+="9";
                }
                intVal/=16;
            }

            ans+="x0";

            reverse(ans.begin(),ans.end());

            cout<<ans<<endl;
        }
    }

    return 0;
}
