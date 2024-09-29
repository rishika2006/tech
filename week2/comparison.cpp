#include<iostream>
using namespace std;
int main(){
cout<<"enter the radius of the circle:";
float radius;
cin>>radius;
float area=3.14*radius*radius;
float cir=2*3.14*radius;
cout<<"area="<<area<<endl;
cout<<"circumference="<<cir<<endl;
if(area>cir){
    cout<<"area of circle having radius "<<radius<<" is larger than its circumference";
}
else{
        cout<<"area of circle having radius "<<radius<<"is smaller than its circumference";

   }

    return 0;
}
