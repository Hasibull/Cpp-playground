#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,cs=1;

    cin>>n;
    cin.ignore();

    while(n--){
        string ch1,ch2;

        cin>>ch1>>ch2;

        if(ch1=="tesoura" && ch2=="papel"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="papel" && ch2=="pedra"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="pedra" && ch2=="lagarto"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="lagarto" && ch2=="Spock"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="Spock" && ch2=="tesoura"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="tesoura" && ch2=="lagarto"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="lagarto" && ch2=="papel"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="papel" && ch2=="Spock"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="Spock" && ch2=="pedra"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1=="pedra" && ch2=="tesoura"){
            cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
        }
        else if(ch1==ch2){
            cout<<"Caso #"<<cs<<": De novo!"<<endl;
        }
        else{
            cout<<"Caso #"<<cs<<": Raj trapaceou!"<<endl;
        }
        cs++;
    }

    return 0;
}