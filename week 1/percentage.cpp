#include<iostream>
using namespace std;
int main(){
   cout<<"enter the marks of hindi:";
   float hindi,english,math,science,computer;
   cin>>hindi;
   cout<<"enter the marks of english:";
   cin>>english;
   cout<<"enter the marks of math :";
   cin>>math;
   cout<<"enter the marks of science:";
   cin>>science;
   cout<<"enter the marks of computer:";
   cin>>computer;
   float percentage=(hindi+english+math+science+computer)*100/500;
   cout<<"percentage="<<percentage<<endl;
   return 0;

}