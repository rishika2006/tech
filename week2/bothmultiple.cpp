#include<iostream>
using namespace std;
int main(){
cout<<"enter the positive integer:";
int n;
cin>>n;
if(n<=0){
    cout<<"please enter a positive integer.";
}
else{
    if(n%5==0&&n%3==0){
    cout<<"number is divisible by both 3 and 5";
}
else{
        cout<<"number is not divisible by both 3 and 5";

}
}

    return 0;

}