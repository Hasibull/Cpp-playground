/**
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string number;

    getline(cin, number);

    int nonZero=-1,redix=number.size();

    string ans="";

    if(number[0]=='-'){
        ans+="-";
    }
    else{
        ans+="+";
    }

    int ck=0;

    for(int i=0; i<number.size(); i++){
        if(number[i]!='.' && number[i]!='0' && ck==0 && number[i]!='-'){
            nonZero=i;
            ck=1;
        }
        if(number[i]=='.'){
            redix=i;
        }
    }

    if(nonZero>redix){
        ans+=number[nonZero];
        ans+=".";
        for(int i=nonZero+1; i<nonZero+4; i++){
            if(i>number.size()-1){
                ans+="0";
            }
            else{
                ans+=number[i];
            }
        }
        if(nonZero+5 > number.size()-1){
            ans+="0";
        }
        else{
            if(number[nonZero+5]-'0' >= 5){
                ans+=to_string(number[nonZero+4]-'0'+1);
            }
            else{
                ans+=number[nonZero+4];
            }
        }
        ans+="E-";
        ans+=to_string((nonZero-redix));
    }
    else{
        ans+=number[nonZero];
        ans+=".";
        int afterPoint=nonZero+4;
        for(int i=nonZero+1; i<afterPoint; i++){
            if(i>number.size()-1){
                ans+="0";
            }
            else if(number[i]=='.'){
                afterPoint++;
            }
            else{
                ans+=number[i];
            }
        }
        if(afterPoint>number.size()-1){
            ans+="0";
        }
        else if(afterPoint+1 > number.size()-1){
            if(number[afterPoint]!='.')
                ans+=number[afterPoint];
            else
                ans+="0";
        }
        else{
            if(number[afterPoint]=='.'){
                afterPoint++;
            }
            if(number[afterPoint+1]-'0' >= 5){
                ans+=to_string(number[afterPoint]-'0'+1);
            }
            else{
                ans+=number[afterPoint];
            }
        }

        ans+="E+";

        if(redix>1){
            if(number[0]=='-')
                ans+=to_string((redix-2));
            else
                ans+=to_string((redix-1));
        }
        else{
            ans+="00";
        }
    }

    cout<<ans<<endl;

    return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long double number;

    scanf("%LE",&number);

    printf("%+.4LE\n", number);

    return 0;
}