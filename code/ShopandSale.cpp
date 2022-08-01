#include<iostream>
#include<stdlib.h>
using namespace std;
struct merch{
    float price;
};
int main(){
    float totp=0;
    int totq=0;
    int q;
    cout<<"How many TVs were sold: ?";cin>>q;
    struct merch TV={400};
    totq+=q;
    totp+=q*TV.price;
    cout<<"How many VCRs were sold: ?";cin>>q;
    struct merch VCR={220};
    totq+=q;
    totp+=q*VCR.price;
    cout<<"How many remotes were sold: ?";cin>>q;
    struct merch remote={35.20};
    totq+=q;
    totp+=q*remote.price;
    cout<<"How many CDPs were sold: ?";cin>>q;
    struct merch CDP={300};
    totq+=q;
    totp+=q*CDP.price;
    cout<<"How many Tapes were sold: ?";cin>>q;
    struct merch Tape={150};
    totq+=q;
    totp+=q*Tape.price;
    cout<<totq<<" "<<totp<<endl;
    cout<<"MRP: "<<(totp*((8.25)/100))+totp<<endl;
    string name;
    return 0;
}           