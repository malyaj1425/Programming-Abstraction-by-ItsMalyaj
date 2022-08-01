#include <stdio.h>
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

void output(int start)
{
    if(start==0)
    {
        return;
    }
    output(start-1);
    cout<<start<<endl;
    sleep(0.5);

}
long factorial(long a)
{
    if(a>1){
        return(a*factorial(a-1));
    }
    else{
        return 1;
    }
}
int SODI(int a)
{
    if(a<10)
    {
        return(a);
    }
    int b=a%10;
    return (b+SODI(a/10));
    

}
int pattern(int a)
{
    for(int i=0;i<a;++i)
    {
        for(int j=0;j<=i;++j)
        {
            cout<<"x";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<factorial(10)<<'\n';
    cout<<SODI(123)<<endl;
    cout<<pattern(5);

}

