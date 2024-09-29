#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter 1ist side of triangle:";
    cin>>a;
    cout<<"enter 2nd side of triangle:";
    cin>>b;
    cout<<"enter 3rd side of triangle:";
    cin>>c;
    if(a==b&&a==c){
        cout<<"It's an equilateral triangle.";
    }
    else if(a==b&&a!=c||b==c&&b!=a||c==a&&c!=b){
        cout<<"It's an isosceles triangle.";

    }
    else{
                cout<<c<<"It's an scalene triangle.";

    }

    return 0;
}