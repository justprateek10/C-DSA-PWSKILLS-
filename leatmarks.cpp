#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the marks a: ";
    int a;
    cin>>a;
    cout<<"Enter the marks b: ";
    int b;
    cin>>b;
    cout<<"Enter the marks c: ";
    int c;
    cin>>c;
    if(a<b && a<c){
        cout<<"a";
    }
     if (b<c && b<a){
        cout<<"b";
    }
    if(c<b && c<a){
        cout<<"c";
    }
}