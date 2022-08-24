#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include <iterator>
using namespace std;
 
int main(){
    // string s="na";
    // string t="apna collegena";
    // int S=s.size();int T=t.size();
    // for(int i=0;i<T-S+1;i++){
    //     if(t.substr(i,S)==s){
    //         cout<<"found at "<<i<<'\n';
    //     }
    // }
    // vector<int> dict(256,-1);
    // int t=256;
    // int i=0;
    // while(t--){
    //     cout<<dict[i]<<" ";
    //     i++;
    // }
    vector<double> nums1={1,2};
    vector<double> nums2={3,4};
    // vector<double> v(a);
    // v.insert(v.end(),b.begin(),b.end());
    // double t=v.size();
    // double i=0;
    // while(t--){
    //     cout<<v[i]<<" ";
    //     i++;
    // }
    // cout<<endl;
    // if((v.size())%2!=0){
    //     int p=v.size()/2;
    //     double s=v[p];
    //     cout<<s;
    // }
    // else{
    //     int p=(v.size())%2;
    //     double s=(v[p+1]+v[p+2])/2;
    //     cout<<s;
    // }
    vector<double> v(nums1);
        v.insert(v.end(),nums2.begin(),nums2.end());
        sort(v.begin(), v.end());
        if((v.size())%2!=0){
        int p=v.size()/2;
        double s=v[p];
        cout<<s;
    }
    else{
        int p=(v.size())%2;
        double s=(v[p+1]+v[p+2])/2;
        cout<<s;
}
return 0;
}