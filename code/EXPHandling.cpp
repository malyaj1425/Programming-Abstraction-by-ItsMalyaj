#include<iostream>

using namespace std;
//What is Exception?
//An runtime anomaly(kinda like error) that occur during execution!

//Types of Exceptions?
// Sync & Async
// Sync: occur only on throw expression
// Async: occurs during normal flow

//catch only requires type but if u wish to print thrown value then you may enter a variable
int main(){
    int a,b,res;
    cin>>a>>b;
    try{
        if(b==0){
            throw 'b';
            cout<<"After Throw!"<<endl;
        }
        else{
            res=a/b;
            cout<<res;
        }
    }
    catch(char x){
        cout<<"0 not allowed bruv?(char)"<<endl;
    }
    try{
        if(b==0){
            throw b;
            cout<<"After Throw!"<<endl;
        }
        else{
            res=a/b;
            cout<<res;
        }
    }
    catch(int x){
        cout<<"0 not allowed bruv?(int)"<<endl;
    }
    catch(...){
        cout<<"unhandled"<<endl;
    }
    try{
        if(b==0){
            throw b;
            cout<<"After Throw!"<<endl;
        }
        else{
            res=a/b;
            cout<<res;
        }
    }
    catch(float x){
        cout<<"0 not allowed bruv?(int)"<<endl;
    }
    catch(...){
        cout<<"unhandled";
    }
    return 0;
}