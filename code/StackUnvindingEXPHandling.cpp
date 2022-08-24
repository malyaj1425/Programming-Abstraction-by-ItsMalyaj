#include<iostream>
#include<stdlib.h>
using namespace std;
int Div(int a,int b){
    try{
        if(b==0||b>a){
            throw b;
        }
        else{
            return a/b;
        }
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