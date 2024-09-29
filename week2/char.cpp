#include<iostream>
using namespace std;
int main(){
    cout<<"enter any charcter:";
    char alph;
    cin>>alph;
    if(alph>='A'&& alph<='Z'|| alph>='a' && alph<='z'){
        cout<<"charcter is alphabet.";
    }
    else{
        cout<<"its a special character.";
    }
    return 0;
}