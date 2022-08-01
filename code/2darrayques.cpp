#include<iostream>
#include<stdlib.h>
using namespace std;

 
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        cout<<"elements of row: "<<i<<endl;
        for(int j=0;j<n;j++)
        {
            int x=0;
            cin>>arr[i][j];
            x++;
        }
    }
    int y=0;
    for(int i=0;i<m;i++)
    {
        int x=0;
        for(int j=0;j<n;j++)
        {
            x+=arr[i][j];
        }
        if(x%3!=0 || x%5!=0)
        {
            cout<<"ERROR!";
            break;
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        int x=0;
        for(int j=0;j<n;j++)
        {
            x+=arr[i][j];
        }
        if(x%3!=0 || x%5!=0)
        {
            cout<<"ERROR!";
            break;
        }
        x=0;
        cout<<endl;
    }

    


    return 0;
}