#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the lenght: ";
    int l;
    cin>>l;
     cout<<"Enter the breadth: ";
    int b;
    cin>>b;
    int area;
    area = l*b;
    int peri;
    peri = 2*(l+b);
    if(area>peri){
        cout<<area<<" Yes, Area is larger";  
    }
    else{
        cout<<peri<<"No, peri is larger";
    }

  
}
