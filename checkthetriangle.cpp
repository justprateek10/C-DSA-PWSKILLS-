#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the side: ";
    int a;
    cin>>a;
    cout<<"Enter the side: ";
    int b;
    cin>>b;
    cout<<"Enter the side: ";
    int c;
    cin>>c;
    if(a==b && b==c  ){
        cout<<"Equlateral triangle";
    }
    else if (a==b || b==c || a==c){
        cout<<"iso triangle";
    }
    else{
        cout<<"Scalene Triangle";

    }
    

    }