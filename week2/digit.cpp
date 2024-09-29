#include <iostream>
using namespace std;
int main(){
    cout<<"enter a positive integer:";
    int n;
    cin>>n;
    if(n>99&&n<1000){
        cout<<"the number "<<n<<" is a 3 digit number";
    }
    else{
        cout<<"the number "<<n<<" is not a 3 digit number";
    }
    return 0;
}