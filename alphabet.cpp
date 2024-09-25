#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Input: ";
    char ch;
    cin>>ch;
    
    if( (ch>='a' && ch<='z' )|| (ch>='A' && ch<='Z')){
        cout<<ch<<endl<<"Entered input is alphabet";
    }
    else if( ch>='0'&& ch<='9'){
        cout<<ch<<endl<<"Entered input is digit";
    }
    else{
        cout<<ch<<endl<<"Entered input is special character";
    }
}