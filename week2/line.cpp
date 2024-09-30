#include <iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3,slope12,slope23,slope31;
    cout<<"enter the x1 and y1 coordinates respectively :";
    cin>>x1>>y1;
    cout<<"enter the x2 and y2 coordinates respectively :";
    cin>>x2>>y2;
    cout<<"enter the x3 and y3 coordinates respectively :";
    cin>>x3>>y3;
    slope12=(y2-y1)/(x2-x1);
    slope23=(y3-y2)/(x3-x2);
    
    if(slope12==slope23){
        cout<<"line is straight";
    }
    else{
        cout<<"line is not straight";
    }
return 0;
}