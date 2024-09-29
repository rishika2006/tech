#include<iostream>
using namespace std;
int main(){
cout<<"enter the length of the rectangle:";
float length,breadth;
cin>>length;
cout<<"enter the breadth of the rectangle:";
cin>>breadth;
float area=length*breadth;
float per=2*(length+breadth);
cout<<"area="<<area<<endl;
cout<<"perimeter="<<per<<endl;
if(area>per){
    cout<<"area of rectangle having length "<<length<<" and  breadth "<<breadth<<" is larger than its perimeter";
}
else{
        cout<<"area of circle having length "<<length<<" and  breadth "<<breadth<<" is smaller than its perimeter";

   }

    return 0;
}