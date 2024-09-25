#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the  radius: ";
    int r;
    cin>>r;
    int area;
    area = 3.14*r*r;
    int circum;
    circum = 2*3.14*r;
    if(area>circum){
        cout<<area<<" Yes, Area is larger";
       
        

    }
     if(area==circum){
        cout<<"area is same as circumference:";
     }
    else{
        cout<<circum<<"No, Circumference is larger";
    }

  
}