#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
    int i=1;
    char ch[100];

    while(gets(ch)){
        if(strcmp(ch,"#")==0)
            break;

        cout<<"Case "<<i<<": ";

        if(strcmp(ch,"HELLO")==0){
            cout<<"ENGLISH"<<endl;
        }
        else if(strcmp(ch,"HOLA")==0){
            cout<<"SPANISH"<<endl;
        }
        else if(strcmp(ch,"HALLO")==0){
            cout<<"GERMAN"<<endl;
        }
        else if(strcmp(ch,"BONJOUR")==0){
            cout<<"FRENCH"<<endl;
        }
        else if(strcmp(ch,"CIAO")==0){
            cout<<"ITALIAN"<<endl;
        }
        else if(strcmp(ch,"ZDRAVSTVUJTE")==0){
            cout<<"RUSSIAN"<<endl;
        }
        else{
            cout<<"UNKNOWN"<<endl;
        }
        i++;
    }

    return 0;
}
