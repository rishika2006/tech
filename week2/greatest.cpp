#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter a positive integer:";
    cin>>a;
    cout<<"enter 2nd number:";
    cin>>b;
    cout<<"enter 3rd number:";
    cin>>c;
    if(a>b&&a>c){
        cout<<a<<" is greater than "<<b<<" and "<<c;
            }
    else if(b>a&&b>c){
        cout<<b<<" is greater than "<<a<<" and "<<c;

    }
    else{
                cout<<c<<" is greater than "<<a<<" and "<<c;

    }

    return 0;
}