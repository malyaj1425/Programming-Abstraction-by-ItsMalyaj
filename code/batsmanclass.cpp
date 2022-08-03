#include<iostream>
#include<stdlib.h>
using namespace std;
class batsman{
    string a;
    int b;
    int c;
    int d;
    public:
    batsman(string name,
        int innings,
        int notout,
        int runs)
    {
        a=name;
        b=innings;
        c=notout;
        d=runs;
        cout<<"Name: "<<a<<endl;
        cout<<"Innings: "<<b<<endl;
        cout<<"Not Outs: "<<c<<endl;
        cout<<"Runs: "<<d<<endl;
    }
    
};
class inputs:public batsman
{
    public:
    inputs(string name,
    int innings,
    int notout,
    int runs):batsman(name,innings,notout,runs)
    {
        cout<<"Siuuuuuu!!"<<endl;
    }

};
int main(){
    inputs obj("Sachin",100,100,1000);
    return 0;
}