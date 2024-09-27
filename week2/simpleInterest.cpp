#include <iostream>
using namespace std;
int main(){
int p,r,t;
float SI;
cout<<"enter the principle amount:";
cin>>p;
cout<<endl<<"enter the rate of interest:";
cin>>r;
cout<<endl<<"enter the time in year:";
cin>>t;
SI=(p*r*t)/100;
cout<<endl<<"simple interest ="<<SI;
    return 0;
}