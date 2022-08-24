//Containers(DATA)
//Containers-->Sequence-->list vector dequeue
//Containers-->Associative-->Sets Maps Multiset
//Container-->Adaptor-->Stack Queue P_Queue
#include<iostream>
#include <vector>
#include<stdlib.h>
using namespace std;
 
int main(){
//     vector<int> a;
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;cin>>n;
//         a.push_back(n);
//     }
//     for(auto t=begin(a);t!=end(a); ++t)
//     {
//         cout<<*t<<" ";
//     }
//     cout<<endl;
//     a.insert(a.begin()+4,4,100);
// for(auto t=begin(a);t!=end(a); ++t)
//     {
//         cout<<*t<<" ";
//     }
//     cout<<endl<<a.size()<<endl;
//     cout<<a.capacity()<<endl;
//     return 0;
vector<int> v1={1,2,3,4,5};
vector<int> v2(v1);
v1.push_back(6);
v1.push_back(7);
v1.push_back(8);
vector<int> v3(v2);
v3.push_back(9);
v3.push_back(10);
v3.push_back(11);

for(auto t=begin(v3);t!=end(v3);++t){
    cout<<*t<<" ";
}
cout<<endl;

}