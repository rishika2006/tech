#include <iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"enter x and y coordinates respectively:";
    cin>>x>>y;
    if(x==0&&y==0){
        cout<<"point lies at origin.";
    }
    else if(x==0&&y!=0){
        cout<<"point lies at y-axis";
    }
    else if(x!=0&&y==0){
        cout<<"point lies at x-axis";
    }
    else{
        cout<<"point lies in XY plane";
    }
    return 0;
}