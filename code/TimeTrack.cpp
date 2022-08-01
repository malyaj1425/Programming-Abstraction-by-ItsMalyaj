#include<iostream>
#include<stdlib.h>
using namespace std;
class TimeTrack{
    private:
    int hrs,min;
    public:
    
    int InputData()
    {
        cin>>hrs>>min;
    }
    void show()
    {
        cout<<hrs<<" and "<<min<<endl;
    }
    friend void totaltime(const TimeTrack&,const TimeTrack&);
};
void totaltime(const TimeTrack& t1,const TimeTrack & t2)
{
    int thrs=t1.hrs+t2.hrs;
    int tmin=t1.min+t2.min;
    if(tmin>60)
    {
        thrs+=tmin/60;
        tmin=tmin%60;
    }
    cout<<thrs<<" "<<tmin<<endl;
}
int main(){
    
    TimeTrack t1;
    t1.InputData();
    TimeTrack t2;
    t2.InputData();
    totaltime(t1,t2);
    



    return 0;
}