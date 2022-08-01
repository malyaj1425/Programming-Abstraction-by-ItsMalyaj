#include<iostream>
#include<stdio.h>
#include<string>
#include <stdlib.h>
#include <array>
#include <algorithm>
using namespace std;
// enum colours{red,black,green,purple,yellow,orange};
// enum suit{heart,spades=8,diamonds=3,club};
// typedef int ui;
int* insertX(int n, int arr[],
            int x, int pos)
{
    int i;
    n++;
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    return arr;
}
int* removeall(int arr[],int key,int size)
{
    int index=0;
    int Arrays[size];
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[key])
        {
            arr[index]=Arrays[i];
            index++;
        }
    }
    
    for(int j=0;j<size;j++)
    {
        cout<<Arrays[j]<<" ";
    }
    
}
int printarr(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}
int swap(int arr[],int pos1,int pos2)
{
    int temp;
    temp==arr[pos1];
    arr[pos1]==arr[pos2];
    arr[pos2]==temp;
}
int main()
{
    // cout<<red<<black<<'\n';
    // cout<<diamonds<<endl;
    // ui john;
    // int var=344;
    // int *varPTR=&var;
    // int **varDPTR=&varPTR;
    // void *ptr;    //has no type and can be used for any variable best pointer saves memory
    // cout<<&var<<" "<<varPTR<<" "<<varDPTR<<endl;
    int n;
    cout<<"Enter No. Of Elements: ";cin>>n;
    cout<<"Enter Elements: "<<endl; 
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    int i;
    int x;
    cout<<"Enter Which Element You Wish To Search: ";cin>>i;
    cout<<arr[i-1];
    cout<<endl;
    cout<<"Enter Which Element You Wish To Delete: ";cin>>x;
    int y=0;
for(int i=0;i<n;i++)
    {
        if(arr[x]==arr[i])
        {
            y++;

        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[x]==arr[i])
        {
            arr[x]=arr[x+1];
            x++;
        }
    }
    
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    int pos;
    cout<<"Enter a position you wish to insert at: ";cin>>pos;
    cout<<endl;
    int x1;
    cout<<"Enter a element you wish to insert: ";cin>>x1;
    insertX(n,arr,x1,pos);
    printarr(arr,n);
    cout<<endl;
    int x2;
    int x3;
    // cout<<"Enter a element you wish to remove: ";cin>>x2;
    // removeall(arr,x2,n);
    cout<<"Enter indexes of elements you wish to swap: ";cin>>x2>>x3;
    swap(arr,x2,x3);
    printarr(arr,n);







    
}