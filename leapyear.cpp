#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the year: ";
    int a;
    cin>>a;
    if(a%4==0){
        cout<<a<<"-Yes the year is leap year ";
    }
    else{
        cout<<"Not a leap year";
    }
}