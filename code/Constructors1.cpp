#include<iostream>
#include<stdlib.h>
using namespace std;
class product{
    private:
     int fval;
     int sval;
    public:
     int x;
     product()
     {
        cout<<"Default Const Called!"<<endl;
        x=314;
     }
     void SetVal(int a,int b)
     {
        fval=a;
        sval=b; 
     }
    int getfval();
    int getsval();
    int addval();
    int subval();
};
int product::getfval()
{
    return fval;
}
int product::getsval()
{
    return sval;
}
int product::addval()
{
    cout<<fval+sval;
}
int product::subval()
{
    cout<<fval-sval;
}
int main(){
    product pobj;
    pobj.SetVal(11,1);
    pobj.addval();
    pobj.subval();
    pobj.x;
    cout<<pobj.x<<endl;


    

    return 0;

}