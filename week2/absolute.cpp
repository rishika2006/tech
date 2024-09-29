#include<iostream>
using namespace std;
int main(){
   cout<<"enter the number:";
   int n;
   cin>>n;
   if(n<0){
   int a=(-n);
   cout<<"absolute value of "<<n<<" is "<<a;
   }
   else{
    cout<<"absolute value of "<<n<<" is "<<n;
   }
   
    return 0;
}