#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Performance{
    public:
    float punc;
    float tcr;
    float ots;
    char totalgrade;
    void calc(){
        float res=punc+tcr+ots;
        if(res>200){
            totalgrade='A';
        }
        else if(res<200&&res>100)
        {
            totalgrade='B';
        }
        else{
            totalgrade='C';
        }
    }
};
class Employee:public Performance{
    private:
    int Empno_;
    string Empname_;
    int yoe_;
    
    
    public:
    Employee(){
    };
    // Employee(int e,string n,int y,Performance pe){
        
    // };

    void Takedata(){
        int e;
        string n;
        int y;
        cout<<"Enter name:\n";
        cin>>n;
        cout<<"Enter Employee Number:\n";
        cin>>e;
        cout<<"Enter Year Of Experience:\n";
        cin>>y;
        cout<<"Enter Punctual rate:\n";
        cin>>punc;
        cout<<"Enter TCR:\n";
        cin>>tcr;
        cout<<"Enter OTS:\n";
        cin>>ots;
        Empno_=e;
        Empname_=n;
        yoe_=y;
        
        
        
    }
    void ShowData(){
        calc();
        cout<<Empno_<<" "<<Empname_<<" "<<yoe_<<" "<<punc<<" "<<ots<<" "<<tcr<<" "<<totalgrade;
        cout<<endl;
        
    }
    int getEmp()
    {
        int empn;
        empn=Empno_;
    }

};
 
int main(){
    int n;
    cout<<"Enter no. of employee: ";cin>>n;
    Employee obj[n];
    for(int i=0;i<n;i++)
    {
        Employee s;
        s.Takedata();
        obj[i]=s;
    }
    int x;
    cout<<"Search Employee By Employee No.: ";cin>>x;
    for(int j=0;j<n;j++){
        if(obj[j].getEmp()==x)
        {
            obj[j].ShowData();
        }
    }
    return 0;
}