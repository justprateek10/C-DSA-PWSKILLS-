#include<iostream>
using namespace std;
int main(){
   
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the coordinates x1,x2,x3,y1,y2,y3;: ";
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
    
    int a= (y2-y1)/(x2-x1);
     int b= (y3-y2)/(x3-x2);
    if( a==b){
        cout<<"its lies on straight line";
    }
    else{
        cout<<"Not lieas in straight line";
    }
    }