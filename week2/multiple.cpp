#include<iostream>
using namespace std;
int main(){
    cout<<"enter a positive number:";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"multiple of 5 or divisible by 5";
    }
    else{
        cout<<"not divisible by 5";
    }
    return 0;

}