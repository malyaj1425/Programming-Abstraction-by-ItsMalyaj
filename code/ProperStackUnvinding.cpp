#include<iostream>
#include<stdlib.h>
using namespace std;
int DisplayEXP(int a,int b){
    cout<<a<<" "<<b<<endl;
    try{
        if(b==0){
            throw b;+
        }
    }
    catch(int){
        cout<<"B is 0 bruv"<<endl;
        throw;
    }
}
int Div(int a,int b){
    try{
        DisplayEXP(a,b);
        return a/b;
    }
    catch(int x){
        cout<<"B is either Larger than A or is 0"<<endl;
        throw;
    }
}
int main(){
    int a,b;cin>>a>>b;
    try{
        int r=Div(a,b);
        cout<<r;
    }
    catch (int){
        cout<<"Exception Occured";
    }
    return 0;
    
}